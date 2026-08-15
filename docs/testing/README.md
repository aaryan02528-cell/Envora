# Envora Testing & Validation Framework

This directory contains test protocols, bench validation procedures, test automation scripts, and empirical test reports for **Envora**.

---

## Testing Strategy Overview
To evolve Envora into an industry-ready product, testing spans hardware verification, environmental accuracy, network resilience, and long-term reliability.

> [!NOTE]
> All test results documented in this folder must reflect empirical bench measurements. Placeholder test results or assumed outcomes are strictly prohibited.

---

## Planned Test Matrix

| Test Domain | Test Objective | Target Parameters | Test Method | Status |
| :--- | :--- | :--- | :--- | :--- |
| **Sensor Accuracy** | Validate temperature & humidity tolerances | $\pm 2^\circ\text{C}$ Temp, $\pm 5\%$ RH | Comparison against calibrated reference meter | Planned |
| **Sensor Reliability** | Detect read timeouts, corrupt checksums | Sensor fault count over $10,000$ reads | Continuous polling stress loop | Planned |
| **LCD Operation** | Confirm character rendering & I2C stability | Zero missing characters, I2C bus lockup recovery | Dynamic screen refresh test | Planned |
| **Wi-Fi Reliability** | Verify reconnect capability & RSSI resilience | Auto-reconnect within $< 10\text{s}$ of AP drop | AP power-cycling test | Planned |
| **Time Synchronization** | Validate NTP synchronization & drift | Time drift $< 1\text{s}$ per 24h offline | NTP update & internal RTC drift tracking | Planned |
| **Location Detection** | Verify IP/Location API response parsing | Valid lat/long and outdoor weather payload | Mock and live API response tests | Planned |
| **Power Stability** | Measure supply ripple under Wi-Fi transmit bursts | Voltage drop $< 100\text{mV}$ under peak load | Oscilloscope voltage probing on 5V & 3.3V rails | Planned |
| **Startup / Restart** | Verify brownout detection & clean boot behavior | Clean boot from power cycle & soft reset | 50 consecutive hard power toggles | Planned |
| **Network Failure Handling** | System behavior during prolonged offline periods | Uninterrupted local LCD display without network | Disconnect router for 2 hours | Planned |
| **Sensor Failure Handling** | Graceful handling of disconnected sensor wire | System displays error alert without crashing | Physical disconnect of sensor signal line during operation | Planned |
| **Long-Duration Operation** | 48-hour continuous stability run-in test | Zero heap memory leaks, zero panic resets | Continuous logging over serial UART | Planned |

---

## Test Procedure Template
Test reports in this directory will follow this template:
1. **Test Identifier & Name**
2. **Objective**
3. **Test Setup & Wiring Diagram**
4. **Pass / Fail Criteria**
5. **Observed Results & Telemetry Data**
6. **Verdict & Corrective Actions (if failed)**
