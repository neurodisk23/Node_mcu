#include<ESP8266WiFi.h>
#include<DNSServer.h>
#include<WiFiManager.h>

WiFiManager wifi ;


void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
wifi.autoConnect("harshal_2");
Serial.println("connected to harshal");


}

void loop() {
  // put your main code here, to run repeatedly:

}

// output would look something like this 
/*

*wm:StartAP with SSID:  harshal_2
*wm:AP IP address: 192.168.4.1
*wm:Starting Web Portal 
*wm:4 networks found
*wm:3 networks found
*wm:3 networks found
*wm:3 networks found
*wm:Connecting to NEW AP: Harshita
*wm:connectTimeout not set, ESP waitForConnectResult... 
*wm:Connect to new AP [SUCCESS] 
*wm:Got IP Address: 
*wm:192.168.1.11 
*wm:config portal exiting 
connected to harshal

*/
