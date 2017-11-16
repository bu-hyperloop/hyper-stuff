//I2C bus support
#include <Wire.h>
//OneWire bus suport
#include <OneWire.h>
//DS18B20 temperature sensor support
#include <DallasTemperature.h>
//DS18B20 sensor pin
#define ONE_WIRE_BUS 8

// Setup a oneWire instance to communicate with any OneWire devices 
// (not just Maxim/Dallas temperature ICs)
OneWire oneWire(ONE_WIRE_BUS);
 
// Pass our oneWire reference to Dallas Temperature.
DallasTemperature sensors(&oneWire);

void setup()
{
  Serial.begin(9600);
  sensors.begin();
}

void loop()
{  
  sensors.requestTemperatures();
  
  //Read first sensor
  float temp = sensors.getTempCByIndex(0);
  
  //Print first sensor results
  Serial.print("T1: ");
  Serial.print(temp);
  Serial.print("      ");

  //Read second sensor  
  temp = sensors.getTempCByIndex(1);
  
  //Print second sensor result
  Serial.print("T2: ");  
  Serial.print(temp);
  Serial.print("      ");
  
  //Wait 0.1 sec
  delay(1);  
}
