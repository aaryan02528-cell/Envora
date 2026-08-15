# Envora Embedded Engineering Learnings System

This directory functions as an active knowledge repository for embedded systems engineering concepts learned and applied during the development of **Envora**.

---

## Core Purpose
Envora is built to cultivate industry-grade embedded engineering competence. Theory alone is insufficient; every concept in this directory reflects hands-on breadboard experimentation, signal analysis, debugging, and software implementation.

---

## Standard Learning Document Structure
Every concept document created in `docs/learnings/` must follow this standardized template:

```markdown
# [Concept Number]: [Concept Title]

## 1. What the Concept Is
A clear, accurate technical definition of the concept.

## 2. Why Envora Needs It
Explaining the specific functional or structural requirement in Envora solved by this concept.

## 3. How It Works Electrically / Software-Wise
Circuit behavior, timing requirements, register configurations, or software protocols.

## 4. Practical Bench Testing & Verification
What was wired, coded, measured (e.g., multimeter, logic analyzer, oscilloscope, serial logs).

## 5. Challenges & Issues Encountered
What broke, signal noise, timing mismatches, hardware quirks, or unexpected bugs.

## 6. Key Learnings & Engineering Insights
Key takeaways and rules of thumb discovered during testing.

## 7. Real-World Embedded Engineering Context
How this concept applies to industrial embedded systems, commercial IoT devices, and product design.
```

---

## Planned Concept Index

The following topic documents will be created sequentially as each milestone is actively researched, implemented, and bench tested:

| File | Topic / Concept | Status | Focus Area |
| :--- | :--- | :--- | :--- |
| `01-power-basics.md` | Power Systems & SMPS Basics | Planned | 5V SMPS regulation, ripple, decoupling capacitors |
| `02-voltage-current-power.md` | Voltage, Current & Power Budgeting | Planned | Ohm's law, trace resistance, current draw profiling |
| `03-esp32-gpio.md` | ESP32-C3 GPIO Electrical Characteristics | Planned | Push-pull, open-drain, internal pullups, drive strength |
| `04-dht11-communication.md` | Single-Wire Digital Sensor Protocol | Planned | DHT11 custom handshake, pulse-width timing, parity check |
| `05-i2c-basics.md` | I2C Bus Interfacing & PCF8574 | Planned | SDA/SCL, pull-up sizing, I2C address scanning, bus speed |
| `06-lcd-interface.md` | Character LCD (HD44780) Driving | Planned | Nibble mode (4-bit), LCD control commands, backlight circuit |
| `07-wifi-and-networking.md` | ESP32 Wi-Fi Stack & Station Mode | Planned | 802.11 b/g/n station init, reconnect loops, low-power modes |
| `08-ntp-time.md` | Network Time Protocol (NTP) Sync | Planned | UDP sockets, Epoch timestamps, timezone offset calculations |
| `09-http-and-rest-apis.md` | Embedded HTTP/REST Client | Planned | HTTP GET/POST, JSON parsing, API authentication header safety |
| `10-error-handling.md` | Fault Detection & Watchdog Recovery | Planned | Task WDT, sensor connection watchdog, crash recovery |

> [!NOTE]
> Learning documents will be authored when the corresponding hardware and firmware features are implemented and tested on the bench.
