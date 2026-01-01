#include <ESP8266WiFi.h>
#include <ESPAsyncWebServer.h>
#include <FS.h>

AsyncWebServer server(80);
String heatmapData = "SSID,RSSI,Time\n";

void setup() {
  Serial.begin(115200);
  WiFi.mode(WIFI_AP);
  WiFi.softAP("WiFiMapper", "12345678");
  
  server.on("/", HTTP_GET, [](AsyncWebServerRequest *request){
    String html = "<html><body><h1>WiFi Heatmap</h1><pre id='data'>";
    html += heatmapData;
    html += "</pre><button onclick='location.reload()'>Refresh</button></body></html>";
    request->send(200, "text/html", html);
  });
  
  server.on("/scan", HTTP_GET, [](AsyncWebServerRequest *request){
    WiFi.mode(WIFI_STA);
    WiFi.disconnect();
    delay(100);
    int n = WiFi.scanNetworks();
    
    for(int i=0; i<n; i++) {
      heatmapData += WiFi.SSID(i) + "," + String(WiFi.RSSI(i)) + "," + String(millis()/1000) + "\n";
    }
    WiFi.mode(WIFI_AP);
    WiFi.softAP("WiFiMapper", "12345678");
    request->send(200, "text/plain", "Scanned");
  });
  
  server.on("/export", HTTP_GET, [](AsyncWebServerRequest *request){
    request->send(200, "text/csv", heatmapData);
  });
  
  server.begin();
  Serial.println("WiFiMapper ready at 192.168.4.1");
}

void loop() {}
