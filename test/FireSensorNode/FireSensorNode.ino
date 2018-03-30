#include <FireSensorNode.h>
#include <SmokeSensor.h>
#include <BatterySensor.h>

#define INVERVAL_SMOKE_SENSING_MS     100
#define INVERVAL_BATTERY_SENSING_MS   1000

FireSensorNode  fireSensorNode;
SmokeSensor     sensorSmoke;
BatterySensor   sensorBattery;

double sensorValueSmoke   = 0;
double sensorValueBattery = 0;

void callbackSmokeSensor() {
  sensorValueSmoke = sensorSmoke.sense();
  Serial.print("callback: smoke = ");
  Serial.println(sensorValueSmoke); 
}

void callbackBatterySensor() {
  sensorValueBattery = sensorBattery->sense();
  Serial.print("callback: battery = ");
  Serial.println(sensorValueBattery);   
}

void setup() {
  Serial.begin(115200);
  Serial.println("\n\n*** Fire Sensor Node Started ***\n");

  fireSensorNode.addSensor(sensorSmoke, callbackSmokeSensor, INVERVAL_SMOKE_SENSING_MS);
  fireSensorNode->addSensor(sensorBattery, callbackBatterySensor, INVERVAL_BATTERY_SENSING_MS);
  fireSensorNode->startSense();
}

void loop() 
{
  fireSensorNode->run();
}


