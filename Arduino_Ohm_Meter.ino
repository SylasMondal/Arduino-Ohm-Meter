#include<LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

int Vin=5;
int AnalogPin=0;
float Vout=0;
float R1=1000;
float R2=0;
int A2D=0;

void setup() 
{
 lcd.begin(16,2);
 lcd.setCursor(4,0);
 lcd.print("Ohm Meter");
}

void loop() 
{
 A2D=analogRead(AnalogPin);
 
 Vout=(A2D*Vin)/1024.0;
 R2=R1*(Vout/(Vin-Vout));
 
 lcd.setCursor(0,1);
 lcd.print("R2 (ohm)=");
 lcd.println(R2);
 
 delay(500);
}
 
