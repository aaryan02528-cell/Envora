# Envora Firmware Architecture

This directory houses all embedded software and source code for the **Envora** Smart Environmental Monitoring Module.

---

## Target Controller
- **MCU**: ESP32-C3 Mini Development Board
- **Core Architecture**: RISC-V Single-core 32-bit CPU (up to 160 MHz)
- **Wireless Capabilities**: 2.4 GHz Wi-Fi (802.11 b/g/n) & Bluetooth 5 (LE)
- **Primary Peripheral Interfaces**: GPIO, I2C, SPI, UART, ADC

---

## Intended Firmware Responsibilities
1. **Hardware Abstraction & Initialization**:
   - GPIO configuration, system clocks, and power management.
   - I2C peripheral setup for LCD display.
   - Single-wire digital interface timing for DHT11.
2. **Environmental Data Acquisition**:
   - Periodic sensor polling with error checking and CRC validation.
   - Filtering and sanity checking of temperature & humidity data.
3. **Display & User Interface Management**:
   - Rendering metrics, system status, time, and notifications on the 16x2 LCD.
4. **Networking & Time Sync**:
   - Non-blocking Wi-Fi station mode connection and reconnect management.
   - Network Time Protocol (NTP) client synchronization.
5. **Location & API Services (Planned)**:
   - Requesting location-based outdoor comparison data over HTTP/REST.
6. **System Fault Management & Reliability**:
   - Hardware Watchdog Timer (WDT) feeding.
   - Sensor disconnect recovery loops and error state logging.

---

## Future Modular Firmware Architecture
```
                         +-----------------------------+
                         |      Main Application       |
                         |   (State Machine / Loop)    |
                         +--------------+--------------+
                                        |
        +-------------------------------+-------------------------------+
        v                               v                               v
+---------------+               +---------------+               +---------------+
| Sensor Driver |               | Display Driver|               | Network Stack |
|   (DHT11)     |               | (16x2 I2C LCD)|               | (Wi-Fi/NTP)   |
+-------+-------+               +-------+-------+               +-------+-------+
        |                               |                               |
        +-------------------------------+-------------------------------+
                                        |
                                        v
                         +-----------------------------+
                         | Hardware Abstraction (HAL)  |
                         |    (ESP32-C3 Peripherals)   |
                         +-----------------------------+
```

---

## Directory Organization
- **`src/`**: Application main file (`main.cpp` / `main.c`) and core implementation files.
- **`include/`**: Header files (`.h` / `.hpp`), macro definitions, and type definitions.
- **`lib/`**: Custom project-specific libraries and third-party driver wrappers.

> [!NOTE]
> Firmware implementation will begin following initial hardware bench testing and pinout validation.
