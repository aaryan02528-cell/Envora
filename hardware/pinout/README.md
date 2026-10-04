# Envora Hardware Pinout Mapping

This document provides the authoritative GPIO and peripheral pin mapping table for the **Envora** environmental monitoring module based on the ESP32-C3 Mini development board.

---

## ESP32-C3 Mini Pin Mapping Table

| ESP32-C3 Pin | Peripheral / Target | Signal Name | Protocol / Type | Hardware Status | Notes |
| :--- | :--- | :--- | :--- | :--- | :--- |
| **GPIO 3** | DHT11 Sensor | `DHT11_DATA` | Single-Wire Digital | **Verified (v0.2)** | Dedicated sensor signal input |
| **3.3V** | DHT11 VCC | `VCC_3V3` | Power (3.3V DC) | **Verified (v0.2)** | Main logic power rail |
| **GND** | DHT11 GND | `GND` | Ground | **Verified (v0.2)** | Common ground reference |
| **GPIO 8** *(Planned)* | I2C LCD | `I2C_SDA` | I2C Serial Data | Reserved (v0.3) | Default ESP32-C3 I2C SDA pin |
| **GPIO 9** *(Planned)* | I2C LCD | `I2C_SCL` | I2C Serial Clock | Reserved (v0.3) | Default ESP32-C3 I2C SCL pin |

> [!NOTE]
> Additional GPIO pins will be assigned and updated here as physical bench validation is completed for each peripheral module.
