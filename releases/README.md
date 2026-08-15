# Envora Product Release Roadmap & Changelog

This directory tracks formal versioned releases, compiled firmware binaries, and release notes for **Envora**.

---

## Product Versioning Strategy
Envora uses semantic product versioning (`v0.X` for prototype iterations leading to `v1.0` commercial-grade release):

- `v0.x`: Alpha development, bench prototyping, and feature integration.
- `v1.0`: First feature-complete, fully validated, standalone product release.

---

## Version Roadmap Targets

| Version | Target Milestone | Description | Status |
| :--- | :--- | :--- | :--- |
| **v0.1** | Initial Prototype & Setup | Project structure, documentation framework, hardware bench setup. | **Current Work** |
| **v0.2** | Sensor Integration | Single-wire DHT11 driver integration, data reading, and checksum validation. | Planned |
| **v0.3** | Display Integration | 16x2 LCD I2C driver integration and telemetry layout UI. | Planned |
| **v0.4** | Standalone Power | 5V SMPS power supply integration and power baseline analysis. | Planned |
| **v0.5** | Time & Date Sync | Wi-Fi connection initialization and NTP real-time clock synchronization. | Planned |
| **v0.6** | Connectivity & Location | Geolocation detection and outdoor ambient weather comparison data. | Planned |
| **v0.7** | Reliability Improvements | Watchdog timer implementation, error handling, and fault recovery. | Planned |
| **v0.8** | Physical Enclosure & PCB | Perfboard/PCB layout design and custom enclosure prototyping. | Planned |
| **v0.9** | Final Validation | 48-hour continuous stress testing, thermal run-in, and drift analysis. | Planned |
| **v1.0** | First Complete Product | Industry-ready, production-grade standalone environmental monitoring device. | Planned |

> [!IMPORTANT]
> Milestone entries above represent **planned roadmap targets**, not completed releases. Formal release tags and binaries will be attached upon milestone completion.
