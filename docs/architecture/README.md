# System Architecture

This directory contains technical specifications, hardware block diagrams, power flow charts, and firmware execution state machine models for **Envora**.

---

## Architectural Principles
1. **Modularity**: Firmware layers and hardware peripherals must be loosely coupled to enable seamless sensor or display upgrades (e.g., replacing DHT11 with SHT3x without changing LCD or networking code).
2. **Reliability-First Design**: System components must fail gracefully. Sensor disconnects or Wi-Fi dropouts should never cause system lockups or unhandled panics.
3. **Low Noise & Power Stability**: Clean separation of digital signals and power distribution to minimize measurement jitter.

---

## Architecture Sub-Domains
- **[Hardware Block Diagram](file:///C:/Users/aarya/.gemini/antigravity/scratch/Envora/docs/architecture/README.md#hardware-block-diagram)**: Microcontroller, sensors, display, and power connections.
- **[Firmware Layering](file:///C:/Users/aarya/.gemini/antigravity/scratch/Envora/docs/architecture/README.md#firmware-layering)**: Driver interfaces, HAL, business logic, and error handlers.
- **[Power Topology](file:///C:/Users/aarya/.gemini/antigravity/scratch/Envora/docs/architecture/README.md#power-topology)**: 5V SMPS input, 3.3V LDO regulation, and current budget analysis.

---

## Hardware Block Diagram (Conceptual)
```
 +-----------------------------------------------------------------------+
 |                            5V SMPS Input                              |
 +------------------+---------------------------------+------------------+
                    |                                 |
                    v (5V Power)                      v (5V Backlight/VCC)
 +------------------+-------------------+     +-------+---------------+
 |     ESP32-C3 Mini MCU Board          |     | 16x2 I2C LCD Display  |
 |  - RISC-V 32-bit Core                |     | (PCF8574 Backpack)    |
 |  - 3.3V Logic Regulated              |     +-------+---------------+
 +---------+--------------------+-------+             ^
           |                    |                     | (I2C: SDA/SCL)
           v (Single-Wire GPIO) +---------------------+
 +---------+--------------------+
 |     DHT11 Temp & Humidity    |
 |     Environmental Sensor     |
 +------------------------------+
```

---

## Firmware Layering
```
+------------------------------------------------------------------------+
|                     Application Layer (Main Loop)                      |
|          - State Machine (INIT -> SENSE -> DISPLAY -> SYNC)            |
+------------------------------------------------------------------------+
|                            Manager Layer                               |
|   +-----------------------+ +--------------------+ +-----------------+ |
|   | Environmental Manager | |  Display Manager   | | Network Manager | |
|   +-----------------------+ +--------------------+ +-----------------+ |
+------------------------------------------------------------------------+
|                             Driver Layer                               |
|   +-----------------------+ +--------------------+ +-----------------+ |
|   |     DHT11 Driver      | |  LiquidCrystal_I2C | |   ESP-WiFi/NTP  | |
|   +-----------------------+ +--------------------+ +-----------------+ |
+------------------------------------------------------------------------+
|                     Hardware Abstraction Layer (HAL)                   |
|                   (ESP32-C3 IDF / Arduino Peripheral API)              |
+------------------------------------------------------------------------+
```

> [!NOTE]
> Detailed pin assignments and schematic diagrams will be added to `hardware/` as bench validation progresses.
