#include <SoftwareSerial.h>
SoftwareSerial BT(10, 11); 


int sensorPin = A0;    // select the input pin for the potentiometer
int ledPin = 13;      // select the pin for the LED
int sensorValue = 0;  // variable to store the value coming from the sensor


void setup()  
{
  pinMode(13, OUTPUT);
  BT.begin(9600);

  BT.println("Hello from Arduino");
}
char a = 0; 

void loop() 
{
  if(BT.available()>0){
    a=BT.read();
  
  switch (a) {
      case '1':
        digitalWrite(13, HIGH);
        BT.println("LED is on");
      break;
      
      case '2':
        digitalWrite(13, LOW);
        BT.println("LED is off");
      break;
      
      case '3':
        BT.println("------- MENU -------");
        BT.println("1. Switch LED on.");
        BT.println("2. Switch LED off.");
        BT.println("3. This menu.");
        BT.println("--------------------");
      break;
      
    
  }
}
}
