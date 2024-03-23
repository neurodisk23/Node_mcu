#include<ESP8266WiFi.h>

void connect_to_wifi()
{
WiFi.mode(WIFI_STA) ; // nodemcu as station

WiFi.begin("Harshita","23111965");
Serial.println("Connection in progress") ;
while(WiFi.status() != WL_CONNECTED)
{
  Serial.println("Not able to connect");
  delay(200);
}

Serial.print("IP Address:");
Serial.println(WiFi.localIP());
Serial.print("MAC address");
Serial.println(WiFi.macAddress());

}


void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
connect_to_wifi();

}

void loop() {
  // put your main code here, to run repeatedly:

}
