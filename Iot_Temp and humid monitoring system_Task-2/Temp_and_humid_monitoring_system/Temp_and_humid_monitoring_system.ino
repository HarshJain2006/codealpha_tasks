#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <DHT.h>

#define DHTPIN 2
#define DHTTYPE DHT11 

DHT dht(DHTPIN, DHTTYPE);

LiquidCrystal_I2C lcd(0x27, 16, 2);

int ledPin = 8;

float temp;
float humid;
int dt =2000; //delay
void readDHT()
{
  humid = dht.readHumidity();
  temp = dht.readTemperature();

  Serial.print("Temperature: ");
  Serial.print(temp);
  Serial.print(" C  ");

  Serial.print("Humidity: ");
  Serial.print(humid);
  Serial.println(" %");
}
void displayLCD()
{
  lcd.clear();

  lcd.setCursor(0,0);
  lcd.print("Temp:");
  lcd.print(temp);
  lcd.print(" C");

  lcd.setCursor(0,1);
  lcd.print("Humid:");
  lcd.print(humid);
  lcd.print(" %");
}
void temperatureAlert()
{
  if(temp > 30)
  {
    digitalWrite(ledPin, HIGH);

    Serial.println("High Temperature Alert!");
  }
  else
  {
    digitalWrite(ledPin, LOW);
  }
}

void setup()
{
  Serial.begin(9600);

  pinMode(ledPin, OUTPUT);

  dht.begin();

  lcd.init();
  lcd.backlight();

  lcd.setCursor(0,0);
  lcd.print("System Ready");
  delay(dt);
  lcd.clear();
}

void loop()
{
  readDHT();

  displayLCD();

  temperatureAlert();

  delay(dt);
}
