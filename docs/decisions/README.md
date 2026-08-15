# Architecture Decision Records (ADR)

This directory documents key architectural, hardware, firmware, and design decisions made for **Envora**.

---

## ADR Philosophy
Engineering requires making explicit trade-offs. Rather than making silent design choices, Envora records the context, options considered, trade-offs evaluated, and rationale for every major design decision.

---

## Standard ADR Template
Each decision file is saved in `docs/decisions/` formatted as `ADR-XXX-short-title.md` (e.g., `ADR-001-mcu-selection.md`) using the following schema:

```markdown
# ADR-XXX: [Title of Decision]

- **Status**: [ Proposed | Accepted | Deprecated | Superseded ]
- **Date**: YYYY-MM-DD
- **Deciders**: [Names]

---

## 1. Decision
Clear statement of what decision was made.

## 2. Reason & Context
What problem needed solving? What constraints (cost, power, availability, complexity) forced a decision?

## 3. Alternatives Considered
1. **Option A**: Description, Pros, Cons.
2. **Option B**: Description, Pros, Cons.
3. **Option C**: Description, Pros, Cons.

## 4. Trade-offs Evaluated
Comparison of key metrics across options (e.g., cost vs. accuracy, power vs. performance).

## 5. Final Choice & Justification
Why the selected option was superior given project requirements.

## 6. Consequences & Impact
Positive and negative impacts on future firmware, hardware, or cost.
```

---

## Decision Registry

| ADR ID | Title | Target Area | Status | Date |
| :--- | :--- | :--- | :--- | :--- |
| **ADR-001** | Microcontroller Selection (ESP32-C3 Mini) | MCU Architecture | Accepted | 2026-08-15 |
| **ADR-002** | Primary Environmental Sensor Choice (DHT11) | Hardware Sensing | Accepted | 2026-08-15 |
| **ADR-003** | Display Interface (16x2 LCD w/ PCF8574 I2C Backpack) | User Interface | Accepted | 2026-08-15 |
| **ADR-004** | Power Supply Topology (5V SMPS Integration) | Power Electronics | Planned | TBD |
| **ADR-005** | Geolocation & Outdoor Telemetry Strategy | Connectivity/API | Planned | TBD |
| **ADR-006** | Sensor Suite Upgrade Path (SHT3x / BME280) | Hardware Sensing | Planned | TBD |
| **ADR-007** | PCB Physical Format & Layer Stackup | Hardware Manufacturing | Planned | TBD |
| **ADR-008** | Enclosure Thermal & Mechanical Design | Industrial Design | Planned | TBD |
