# Envora
## Smart Environmental Monitoring Module

Envora is a product-oriented embedded systems project designed to evolve from an initial prototype into an industry-ready, standalone environmental monitoring module.

---

## 1. Overview
Envora monitors environmental parameters such as temperature and humidity locally using low-cost, reliable embedded hardware. Designed with modularity, power efficiency, and long-term stability in mind, Envora aims to bridge the gap between simple prototyping and commercial-grade embedded hardware design.

## 2. Project Vision
The long-term goal of Envora is to serve as a robust, networked, self-contained environmental sensing node. It is designed to combine local real-time sensing and display with cloud connectivity, accurate time-synchronization, and location-aware ambient telemetry, housed within a custom enclosure with custom PCB architecture.

## 3. Current Features
> [!NOTE]
> Envora is currently in the active hardware prototyping stage.

- **[COMPLETE] Core Workspace Setup (v0.1)**: Modular software, hardware, and engineering documentation repository structure.
- **[IN PROGRESS] Sensor Integration (v0.2)**: Physical validation of ESP32-C3 microcontroller and DHT11 temperature/humidity sensor over GPIO 3.
- **[NEXT] Display Integration (v0.3)**: 16x2 I2C character LCD interface integration.

## 4. Planned Features
- [x] **Local Temperature & Humidity Sensing (Validation Phase)**: Interfacing DHT11 environmental sensor via single-wire digital protocol (GPIO 3).
- [ ] **Visual Telemetry Display**: Real-time environmental metrics on a 16x2 character LCD via I2C interface.
- [ ] **Wi-Fi Connectivity**: Network stack initialization for NTP time sync and telemetry delivery.
- [ ] **NTP Clock & Date Sync**: Accurate local time keeping synchronized over network connection.
- [ ] **Location & Outdoor Telemetry**: Approximate location detection for localized outdoor comparison data.
- [ ] **Reliability & Error Handling**: Watchdog timers, sensor fault detection, and graceful recovery loops.
- [ ] **Dedicated Power Architecture**: Clean 5V SMPS integration and power regulation.
- [ ] **Custom Enclosure & PCB**: Transition from breadboard prototype to custom perfboard/PCB and standalone housing.

## 5. Hardware
| Component | Model / Spec | Status | Notes |
| :--- | :--- | :--- | :--- |
| **Microcontroller** | ESP32-C3 Mini Dev Board | Verified | RISC-V core, board & serial validated |
| **Environmental Sensor** | DHT11 Module | Verified | Connected to GPIO 3, $26.5\text{--}26.9^\circ\text{C}$, $75\%$ RH |
| **Display** | 16x2 Character LCD | Selected | PCF8574 I2C backpack (Next step) |
| **Power Supply** | 5V SMPS | Selected | External regulated power source |
| **Prototyping Medium** | Solderless Breadboard & Jumpers | Active | Initial validation platform |

## 6. Software/Firmware
- **Architecture**: Modular firmware split into driver layers (Sensor, Display, Network), application logic, and system management.
- **Validation Firmware**: [`firmware/src/dht11_test/dht11_test.ino`](file:///C:/Users/aarya/.gemini/antigravity/scratch/Envora/firmware/src/dht11_test/dht11_test.ino)
- **Target Framework**: PlatformIO / ESP-IDF / Arduino C++ framework.

## 7. System Architecture
```
+-------------------------------------------------------------+
|                      Power Architecture                     |
|                           5V SMPS                           |
+------------------------------+------------------------------+
                               |
                               v
+-------------------------------------------------------------+
|                    ESP32-C3 Microcontroller                 |
|  +-------------------+  +-------------------+  +----------+ |
|  | Single-Wire GPIO3 |  |   I2C Bus (SDA/SCL|  | Wi-Fi    | |
|  +---------+---------+  +---------+---------+  +----+-----+ |
+------------|----------------------|-----------------|-------+
             |                      |                 |
             v (Verified)           v (Next)          v (Planned)
     +---------------+      +---------------+   +------------+
     | DHT11 Sensor  |      | 16x2 I2C LCD  |   | NTP / Cloud|
     +---------------+      +---------------+   +------------+
```

## 8. Development Philosophy
Envora follows a systematic engineering workflow:

$$\text{Understand} \longrightarrow \text{Experiment} \longrightarrow \text{Measure} \longrightarrow \text{Build} \longrightarrow \text{Test} \longrightarrow \text{Debug} \longrightarrow \text{Improve} \longrightarrow \text{Document} \longrightarrow \text{Productize}$$

Every hardware decision, code module, and test outcome is documented transparently in this repository to build a complete engineering record.

## 9. Project Status
- **Current Stage**: Sensor Integration Phase (v0.2) — DHT11 Hardware Validation COMPLETE
- **Active Milestone**: Proceeding to 16x2 I2C LCD Display Integration (v0.3)

## 10. Repository Structure
```
Envora/
├── README.md                 # Primary project overview
├── LICENSE                   # Open-source license
├── .gitignore                # Git ignore rules for embedded dev
├── .env.example              # Sensitive configuration template
├── firmware/                 # Embedded C/C++ firmware code and headers
│   └── src/dht11_test/       # Dedicated DHT11 validation test code
├── hardware/                 # Schematics, pinouts, BOM, PCB files
├── docs/                     # Engineering logs, ADRs, learnings, tests
│   ├── development-log/      # Dated logs (2026-10-03 hardware test)
│   └── testing/              # Hardware test protocols (dht11-test.md)
├── images/                   # Prototype and hardware images
├── data/                     # Raw and processed test telemetry data
├── tools/                    # Flashing, debugging, and helper scripts
└── releases/                 # Release notes and binaries
```

## 11. Testing & Validation
Testing strategies for Envora cover:
1. **[PASSED] MCU & Serial Communication**: ESP32-C3 UART serial output verification.
2. **[PASSED] Sensor Data Pipeline**: Single-wire DHT11 signal reading on GPIO 3 ([docs/testing/dht11-test.md](file:///C:/Users/aarya/.gemini/antigravity/scratch/Envora/docs/testing/dht11-test.md)).
3. **[NEXT] I2C Display Operations**: 16x2 character LCD initialization & rendering.
4. **[PLANNED] Network Resilience & NTP Sync**: Wi-Fi reconnect and time tracking.

Refer to [docs/testing/README.md](file:///C:/Users/aarya/.gemini/antigravity/scratch/Envora/docs/testing/README.md) for test protocols.

## 12. Future Improvements
- Upgrade sensor suite to high-accuracy sensors (e.g., SHT3x, BME280).
- Add battery backup / UPS power management circuit.
- Design custom 3D-printed or molded enclosure.
- MQTT / HTTPS cloud dashboard integration.

## 13. Development Roadmap
- [x] **v0.1 — Initial Prototype**: Directory structure, repository scaffolding, setup docs.
- [ ] **v0.2 — Sensor Integration**: [In Progress] DHT11 hardware validation passed (`dht11_test.ino`).
- [ ] **v0.3 — Display Integration**: [Next] 16x2 I2C LCD UI implementation.
- [ ] **v0.4 — Standalone Power**: 5V SMPS integration and power consumption baseline.
- [ ] **v0.5 — Time/Date**: NTP time sync over Wi-Fi.
- [ ] **v0.6 — Connectivity & Location**: Outdoor environmental comparison & location features.
- [ ] **v0.7 — Reliability Improvements**: Error recovery, watchdog, reconnect loops.
- [ ] **v0.8 — Physical Product**: Perfboard/PCB design and enclosure prototyping.
- [ ] **v0.9 — Final Validation**: Stress testing and thermal run-in.
- [ ] **v1.0 — First Complete Product**: Production-grade release.

## 14. Author
Developed as an open-source, product-focused embedded engineering project.
