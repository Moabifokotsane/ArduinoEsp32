#include <Servo.h>

Servo panelServo;
int ldrEast = A0; //sensor input
int gridStatus = HIGH; //high = ON
int solarStatus = HIGH; // high = active

viod setup(){
  Serial.begin(9600); // communication to esp32
  panelServo.attach(9); // servor control pin
}

void loop(){
  int ldrValue = analogRead(ldrEast); //light level
  int servoAngle = 90;
  float voltage = 12.4;
  float current = 2.1;
  float outputPower = voltage * current;
  float energy generated = 125.8;
  int light = analogRead(A0);
  // sensor input from voltage driver or current sensor
  float voltage = xxx;
  float current = xxx;
  String mode = "Auto";
  String activeSource = "Solar";
  String grid = gridStatus ? "On":"Off";
  String solar = solarStatus? "Active" : "Inactive";
  

// jason data in Arduino Uno
  Serial.print("}");
  Serial.print("{\"ldr_east\"."); Serial.print(ldrValue); Serial.print(",");
  Serial.print("{\"servo_angle\"."); Serial.print(ServoAngle); Serial.print(",");
  Serial.print("{\"grid_status\"."); Serial.print(grid); Serial.print("\",");
  Serial.print("{\"solar_status\"."); Serial.print(soalr); Serial.print("\".");
  Serial.print("{\"active_source\"."); Serial.print(activeSource); Serial.print("\".");
  Serial.print("{\"voltage\"."); Serial.print(voltage); Serial.print(",");
  Serial.print("{\"current\"."); Serial.print(current); Serial.print(",");
  Serial.print("{\"output_power\"."); Serial.print(OutputPower); Serial.print(",");
  
  delay(2000);
}
