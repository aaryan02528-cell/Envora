# Envora Hardware Documentation

This directory contains hardware schematics, breadboard wiring layouts, pinout tables, Bill of Materials (BOM), PCB design files, and hardware revision logs for **Envora**.

---

## Hardware Overview & Current Context

Envora is currently in the **Breadboard Prototyping Stage (v0.1)**.

### Target Hardware Components
- **Microcontroller**: ESP32-C3 Mini Development Board
- **Sensors**: DHT11 Temperature & Humidity Sensor Module
- **Display**: 16x2 Character LCD with PCF8574 I2C Backpack
- **Power Supply**: 5V Switch-Mode Power Supply (SMPS)
- **Interconnects**: Solderless Breadboard & Male-to-Male / Male-to-Female Jumper Wires

---

## Directory Contents

| Directory | Description | Status |
| :--- | :--- | :--- |
| **`schematics/`** | Electrical circuit schematics (KiCad / PDF) | [Planned] |
| **`wiring/`** | Breadboard wiring diagrams and hookup guides | [In Progress] |
| **`pinout/`** | ESP32-C3 GPIO assignment mapping tables | [To be finalized] |
| **`pcb/`** | Custom PCB layout, Gerber files, and drill charts | [Future Stage] |
| **`bom/`** | Bill of Materials with specs, sources, and costs | [Active] |

---

## GPIO & Pin Mapping Policy
> [!IMPORTANT]
> Official GPIO pin mappings will be documented in `pinout/README.md` once hardware bench testing confirms bus stability (e.g., verifying I2C pins `SDA`/`SCL` and single-wire GPIO for DHT11 on ESP32-C3 Mini).
>
> **No GPIO assignments are to be assumed or hardcoded prior to physical bench validation.**
