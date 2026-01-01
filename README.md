# WiFi Heatmap Mapper 📡🔥

ESP8266 walks around mapping WiFi signal strength—no sensors needed.

**Live Demo**: Connect to "WiFiMapper" AP → 192.168.4.1

## Features
- Real-time RSSI heatmap
- Multiple network tracking
- CSV export for Google Maps
- Pure ESP8266 (₹350 only)

## Quick Start
1. Flash `code/wifi_mapper.ino`
2. Connect "WiFiMapper" hotspot
3. Browser: 192.168.4.1 → Walk & map!

| Network | Max RSSI | Coverage |
|---------|----------|----------|
| HomeWiFi | -45dBm | 85% |
## 🚀 5-Min Deploy & Test

### **Arduino Setup**
Arduino IDE → Board: NodeMCU 1.0
Libraries: ESPAsyncWebServer, ESPAsyncTCP (Library Manager)

### **Upload & Test**
Upload wifi_mapper.ino

ESP creates "WiFiMapper" hotspot (pass: 12345678)

Phone → Join WiFiMapper

Browser: 192.168.4.1

Click SCAN → Walk room

Refresh → See RSSI heatmap

/export → Download CSV


### **Libraries (Arduino IDE)**
- `ESPAsyncWebServer` [GitHub](https://github.com/me-no-dev/ESPAsyncWebServer)
- `ESPAsyncTCP` [GitHub](https://github.com/me-no-dev/ESPAsyncTCP)

**Demo GIF:** [add later]

