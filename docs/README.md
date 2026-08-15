# Envora Engineering Documentation Framework

Welcome to the documentation repository for **Envora**, a product-oriented embedded environmental monitoring device.

---

## Documentation Philosophy
Unlike typical college projects or quick proof-of-concept scripts, Envora is documented with industry-level engineering rigor. Every feature, hardware selection, and firmware revision is backed by systematic rationale, practical test data, and technical learnings.

### The Engineering Cycle
Envora adheres strictly to the following iterative development loop:

$$\text{Understand} \longrightarrow \text{Experiment} \longrightarrow \text{Measure} \longrightarrow \text{Build} \longrightarrow \text{Test} \longrightarrow \text{Debug} \longrightarrow \text{Improve} \longrightarrow \text{Document} \longrightarrow \text{Productize}$$

---

## Structure of `docs/`

```
docs/
├── architecture/      # Hardware, firmware, and power system architectural diagrams & specs
├── learnings/         # Practical embedded engineering concept breakdowns and hands-on learnings
├── testing/           # Test protocols, bench validation procedures, and failure mode analysis
├── development-log/   # Chronological development journal recording daily engineering progress
├── decisions/         # Architectural Decision Records (ADRs) explaining technical choices
└── README.md          # Primary documentation guide (this file)
```

---

## Core Domains Covered
Through developing Envora, the documentation records practical knowledge in:
- **Embedded Microcontroller Architecture**: ESP32-C3 RISC-V platform, memory, clocks, and interrupts.
- **Hardware Interfacing**: GPIO electrical characteristics, single-wire timing, I2C bus arbitration.
- **Power Electronics**: SMPS regulation, noise suppression, and power budgeting.
- **Networking & IoT Protocols**: Wi-Fi station mode, NTP time synchronization, REST/HTTP integration.
- **Reliability Engineering**: Watchdog timers, sensor fault isolation, and graceful system degradation.
- **Productization**: Transitioning from breadboard prototype to custom PCB and production-ready enclosure.
