# Envora Bill of Materials (BOM)

This document tracks all physical components, electronic parts, power supplies, and hardware accessories required to build the **Envora** Smart Environmental Monitoring Module.

---

## BOM Field Definitions
Every component added to the official BOM must specify:
1. **Component Name**: Generic descriptive name.
2. **Part / Model**: Specific manufacturer part number or module identifier.
3. **Quantity**: Required units per Envora module.
4. **Purpose**: Functional role within the system.
5. **Voltage / Current**: Operating voltage range and estimated current draw.
6. **Source / Vendor**: Supplier or procurement link.
7. **Approximate Cost**: Unit cost (to be updated upon procurement).
8. **Revision / Status**: Status in hardware roadmap (Prototype / Verified / Production).

---

## Initial Prototype BOM (v0.1)

| Component Name | Part / Model | Qty | Purpose | Voltage / Current | Source / Vendor | Approx Cost | Revision / Status |
| :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- |
| **Microcontroller** | ESP32-C3 Mini Dev Board | 1 | System Host / MCU | 5V (USB/VIN), 3.3V Logic | TBD | TBD | Prototype |
| **Environmental Sensor** | DHT11 Module | 1 | Temp & Humidity Sensing | 3.3V - 5V DC | TBD | TBD | Prototype |
| **Character Display** | 16x2 LCD w/ I2C Backpack | 1 | Visual Output Display | 5V DC (I2C 3.3V/5V) | TBD | TBD | Prototype |
| **Power Supply** | 5V SMPS | 1 | Regulated System Power | 5V DC Output | TBD | TBD | Prototype |
| **Prototyping Board** | Solderless Breadboard | 1 | Prototype Circuit Platform | N/A | TBD | TBD | Prototype |
| **Jumper Wires** | M-M / M-F Wire Set | Assorted | Circuit Interconnects | N/A | TBD | TBD | Prototype |

> [!NOTE]
> Exact part numbers, supplier links, and cost estimates will be populated as components are bench tested and finalized.
