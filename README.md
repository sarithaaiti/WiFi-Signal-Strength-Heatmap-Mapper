# WiFi Heatmap Mapper 📶

ESP8266 WiFi signal strength mapper for home/office using NodeMCU in access‑point mode (default AP IP is usually 192.168.4.1). [web:395]

## 📋 Quick Start

### Arduino IDE Setup

- Board: **NodeMCU 1.0 (ESP-12E Module)**. [web:380]
- Install ESP8266 core:
  - Open **File → Preferences**.
  - In “Additional Boards Manager URLs”, add:

    ```text
    http://arduino.esp8266.com/stable/package_esp8266com_index.json
    ```

  - Then go to **Tools → Board → Boards Manager…**, search **ESP8266**, click **Install**. [web:392]
- Libraries:
  - `ESP8266WiFi` (comes with the ESP8266 core, no separate GitHub install needed). [web:395]
  - `ESPAsyncWebServer`
  - `ESPAsyncTCP` [web:388]

### Deploy Steps

1. Open and upload `code/wifi_mapper.ino` to the NodeMCU.
2. On your phone, connect to WiFi: **"WiFiMapper"** (password: **12345678**, or your custom one in the sketch).
3. Open a browser on the same device:
   - Recommended: Chrome on Android, Chrome/Edge on Windows, Safari on iOS.
   - Make sure mobile data is **off** if your phone tries to switch networks.
4. In the browser address bar, type `http://192.168.4.1` and press Go/Enter, then tap **SCAN**, walk around, and finally use **Export CSV** for analysis. [web:395]

## 📊 Features

- Real‑time RSSI‑based WiFi heatmapping for nearby networks.
- Multi‑network scanning (multiple SSIDs visible in one scan). [web:387]
- CSV export for plotting in Excel, Python, etc. [web:384]
- Only one hardware item required (ESP8266 NodeMCU).

## 🛠 Hardware

| Item              | Cost  |
|-------------------|-------|
| NodeMCU ESP8266   | ₹350  |

(Prices are indicative; actual cost depends on your local seller.)

## 🔗 Libraries

- [ESPAsyncWebServer](https://github.com/me-no-dev/ESPAsyncWebServer) – async web server on ESP8266. [web:388]
- [ESPAsyncTCP](https://github.com/me-no-dev/ESPAsyncTCP) – async TCP support required by the server. [web:388]

## 📁 Folder Structure

```text
.
├── code/
│   └── wifi_mapper.ino      # Main ESP8266 sketch
├── data/                    # (optional) Web assets if using SPIFFS/LittleFS)
└── README.md                # Project documentation
