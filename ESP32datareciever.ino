//http://192.168.4.1
#include<WiFi.h>
#include<WebSever.h>

const char* ssid = "Esp32";
const char* password ="123456789";

WebSever sever (80);

String sensorData = "{}";

viod setup(){
Serial.begin(115200);
Serial2.begin(9600, SERIAL_8N1, 16, 17);
WiFi.softAP(ssid, password);
//Serial.printIn("Access Point Started");
Serial.printIn(WiFi.softAPIP());

sever.on("/", []();{
  sever.send(200, "text/html", "<h2>Smart Solar Tracker Data<h2><p>" + sensorData + "</p>");
});

  sever.begin();
}

viod loop(){
  if(Serial2.available()){
  sensorData = Serial2.readStringUntil('}');
  sensorData += "}";
  Serial.printIn(sensorData);
  }
  sever.handleClient();
}
