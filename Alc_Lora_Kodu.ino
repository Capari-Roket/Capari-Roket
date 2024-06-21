#include <SoftwareSerial.h>
SoftwareSerial FixSerial(10, 11);
 
#define M0 6
#define M1 7
byte upperByte, lowerByte;
int newInt=0;
String rc;
  
void setup() {  
  Serial.begin(9600);
  pinMode(M0, OUTPUT);
  pinMode(M1, OUTPUT);
  digitalWrite(M0, LOW);
  digitalWrite(M1, LOW);
  FixSerial.begin(9600);
  pinMode(8, OUTPUT);  
}  
  
void loop() {   
  if (FixSerial.available() > 1) {
    //upperByte = FixSerial.read();
    //lowerByte = FixSerial.read();
    rc = FixSerial.read();
    //newInt = (upperByte << 8) + lowerByte;
    //Serial.print("Sayi= ");
    //Serial.println(newInt);
    Serial.println(rc);
    digitalWrite(8, HIGH);    
    delay(1000);   
    digitalWrite(8, LOW);  
    delay(1000);  
  } 
}  
 
//ALICI LORA