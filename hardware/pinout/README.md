# Envora Hardware Pinout Mapping

This document provides the authoritative GPIO and peripheral pin mapping table for the **Envora** environmental monitoring module based on the ESP32-C3 Mini development board.

---

## ESP32-C3 Mini Pin Mapping Table

| ESP32-C3 Pin | Peripheral / Target | Signal Name | Protocol / Type | Hardware Status | Notes |
| :--- | :--- | :--- | :--- | :--- | :--- |
| **GPIO 3** | DHT11 Sensor | `DHT11_DATA` | Single-Wire Digital | **Verified (v0.2)** | Dedicated sensor signal input |
| **3.3V** | DHT11 VCC | `VCC_3V3` | Power (3.3V DC) | **Verified (v0.2)** | Main logic power rail |
| **GND** | DHT11 GND | `GND` | Ground | **Verified (v0.2)** | Common ground reference |
| **GPIO 4** | 16x2 LCD Backpack | `I2C_SDA` | I2C Serial Data | **Verified (v0.3)** | Physical bench validated (Address 0x27) |
| **GPIO 5** | 16x2 LCD Backpack | `I2C_SCL` | I2C Serial Clock | **Verified (v0.3)** | Physical bench validated (Address 0x27) |
| **5V** | 16x2 LCD VCC | `VCC_5V` | Power (5V DC) | **Verified (v0.3)** | Power supply for LCD logic & backlight |
| **GND** | 16x2 LCD GND | `GND` | Ground | **Verified (v0.3)** | Common ground reference |

> [!NOTE]
> Additional GPIO pins will be assigned and updated here as physical bench validation is completed for each peripheral module.
