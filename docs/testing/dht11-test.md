# DHT11 Sensor Test

## Objective
Verify physical connection, electrical communication, and data acquisition between the ESP32-C3 microcontroller and the DHT11 temperature/humidity sensor module.

## Hardware
- **Microcontroller**: ESP32-C3 Mini Development Board
- **Sensor**: DHT11 Temperature & Humidity Sensor Module
- **Prototyping Platform**: Solderless Breadboard
- **Interconnects**: Jumper Wires
- **Power Source**: USB 5V (Laptop host)

## Pin Connections

| DHT11 Pin | ESP32-C3 Connection | Description |
|---|---|---|
| **S** (Signal) | GPIO 3 | Single-wire digital data interface |
| **+** (VCC) | 3.3V | Sensor logic power supply |
| **-** (GND) | GND | Common ground reference |

---

## Test Procedure
1. **Independent MCU Validation**: The ESP32-C3 was first tested independently via USB power running standalone serial code (`"ESP32-C3 alive..."`). An initial hardware/soldering connection issue was inspected and corrected with guidance from the project supervisor.
2. **Peripheral Hookup**: The DHT11 sensor module was wired according to the pin mapping table above on the solderless breadboard.
3. **Firmware Deployment**: The dedicated validation firmware [`dht11_test.ino`](file:///C:/Users/aarya/.gemini/antigravity/scratch/Envora/firmware/src/dht11_test/dht11_test.ino) was uploaded to the ESP32-C3.
4. **Serial Monitoring**: The Serial Monitor was opened at `115200` baud to observe sensor initialization and periodic data readouts.
5. **Data Verification**: Repeated ambient readings were observed every 3 seconds.

---

## Test Result
- **Status**: **PASS**
- **Observed Metrics**:
  - **Temperature**: $26.5\text{–}26.9\ ^\circ\text{C}$
  - **Humidity**: $75\%\text{ RH}$

*Note: An initial single transient reading of approximately $0.90\ ^\circ\text{C}$ and $0\%\text{ RH}$ occurred immediately upon power-up during sensor power-up stabilization, after which all subsequent readings stabilized reliably at $26.5\text{–}26.9\ ^\circ\text{C}$ and $75\%\text{ RH}$.*

---

## Accuracy Note
> [!NOTE]
> The DHT11 module is being utilized strictly for initial prototype validation to verify:
> 1. Electrical interface integrity
> 2. GPIO single-wire timing
> 3. Firmware-to-sensor driver pipeline
> 4. Basic telemetry acquisition
>
> The DHT11 has limited measurement resolution ($\pm 2^\circ\text{C}$ temperature, $\pm 5\%$ RH humidity) and is not intended for laboratory-grade environmental measurement. Higher-precision sensors (such as SHT3x or BME280) will be evaluated in future milestones.

---

## Conclusion
Single-wire digital communication between the ESP32-C3 microcontroller and the DHT11 sensor is fully functional and validated.

*Evidence Image*: `images/testing/dht11-esp32-test-success.png` *(Needs to be added manually)*
