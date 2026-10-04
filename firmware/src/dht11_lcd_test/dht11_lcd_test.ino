#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <DHT.h>

#define DHT_PIN 3
#define DHT_TYPE DHT11

#define SDA_PIN 4
#define SCL_PIN 5

DHT dht(DHT_PIN, DHT_TYPE);
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  Serial.begin(115200);
  delay(1000);

  Wire.begin(SDA_PIN, SCL_PIN);

  lcd.init();
  lcd.backlight();
  lcd.clear();

  dht.begin();

  lcd.setCursor(0, 0);
  lcd.print("ENVORA");
  lcd.setCursor(0, 1);
  lcd.print("Starting...");

  delay(2000);
}

void loop() {
  float humidity = dht.readHumidity();
  float temperature = dht.readTemperature();

  if (isnan(temperature) || isnan(humidity)) {

    Serial.println("DHT11 READ FAILED");

    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("DHT11 ERROR");
    lcd.setCursor(0, 1);
    lcd.print("Check sensor");

  } else {

    Serial.println("DHT11 READ SUCCESS");

    Serial.print("Temperature: ");
    Serial.print(temperature);
    Serial.println(" C");

    Serial.print("Humidity: ");
    Serial.print(humidity);
    Serial.println(" %");

    lcd.clear();

    lcd.setCursor(0, 0);
    lcd.print("Temp: ");
    lcd.print(temperature, 1);
    lcd.print((char)223);
    lcd.print("C");

    lcd.setCursor(0, 1);
    lcd.print("Hum: ");
    lcd.print(humidity, 1);
    lcd.print("%");
  }

  delay(3000);
}
