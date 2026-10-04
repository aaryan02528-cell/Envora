#include <DHT.h>

#define DHT_PIN 3
#define DHT_TYPE DHT11

DHT dht(DHT_PIN, DHT_TYPE);

void setup() {
  Serial.begin(115200);
  delay(2000);

  Serial.println();
  Serial.println("================================");
  Serial.println("       ENVORA DHT11 TEST");
  Serial.println("================================");

  dht.begin();

  Serial.println("DHT11 initialized.");
}

void loop() {

  float humidity = dht.readHumidity();
  float temperature = dht.readTemperature();

  if (isnan(humidity) || isnan(temperature)) {

    Serial.println("❌ DHT11 READ FAILED");

  } else {

    Serial.println("✅ DHT11 READ SUCCESS");

    Serial.print("Temperature: ");
    Serial.print(temperature);
    Serial.println(" °C");

    Serial.print("Humidity: ");
    Serial.print(humidity);
    Serial.println(" %");

  }

  delay(3000);
}
