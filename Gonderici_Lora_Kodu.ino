#include <SoftwareSerial.h>
SoftwareSerial FixSerial(10, 11);
 
#define M0 7
#define M1 6
int a=0;
//char b="CapariRoketDeneme";
void setup() {  
 pinMode(8, OUTPUT); 
 Serial.begin(9600);
 
  pinMode(M0, OUTPUT);
  pinMode(M1, OUTPUT);
  digitalWrite(M0, LOW);
  digitalWrite(M1, LOW);
  FixSerial.begin(9600);  
}  
  
void loop() {  
  //FixSerial.write((byte)0x00); //Alıcı Adresi HIGH
  //FixSerial.write(0x3f);       //Alıcı Adresi LOW
  //FixSerial.write(0x17);       //Alıcı Kanalı =0x17=23    (410M+23=433 MHz)
  //intGonder(a); // Bu Sayıyı Göndereceğiz ->
  //FixSerial.write(a);
  FixSerial.write("CapariRoketDeneme123");
  a++;
  delay(250);
  digitalWrite(8, HIGH);   
  delay(250);  
  digitalWrite(8, LOW);  
  //delay(180); 
  FixSerial.write("\n");
}  

void intGonder(int sayi) {
  FixSerial.write(highByte (sayi));
  FixSerial.write(lowByte (sayi));
}
 
//GÖNDERİCİ LORA