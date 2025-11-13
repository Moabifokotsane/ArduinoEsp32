viod setup(){
  Serial.begin(9600); // communication at 9600bits per second
}
void loop(){
  int light = analogRead(A0);
  // sensor input from voltage driver or current sensor
  float voltage = xxx;
  float current = xxx; 

// jason data in Arduino Uno
Serial.print("{\"light\".");
Serial.print(light);
Serial.print("{\"voltage\".");
Serial.print(voltage);
Serial.print("{\"current\".");
Serail.printin(current);
Serial.printin("}");

delay(2000);
}
