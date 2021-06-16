#include <rgb_lcd.h>
 #include <ChainableLED.h>

#define NUM_LEDS  3// definitie le nombre de led pour les heure
#define hello 4//definitie le nombre de led pour les minute
ChainableLED led(8,9 , hello);//définie les port des led pour le minute 
ChainableLED leds(7, 8, NUM_LEDS);//définie les port des led pour le heure
rgb_lcd lcd;

#include <Wire.h> 
#include "DS1307.h"
DS1307 clock;
void setup() {
  leds.init();//initialisation des led
  led.init();
  Serial.begin(9600);
  clock.begin();
clock.fillByYMD(2018,11,17);//définie la date
clock.fillByHMS(10,7,45);//définie l'heure en base 10
clock.setTime();
lcd.begin(25,2);

  
}


void loop() {
  if(clock.hour==0){
    leds.setColorRGB(0,255,255,255);//alumer la led 0 en blanc
    leds.setColorRGB(1,255,255,255);
    leds.setColorRGB(2,255,255,255);
  }
  if(clock.hour==1){
    leds.setColorRGB(0,0,255,0);//allumer la led 0 en vert(255)
    leds.setColorRGB(1,255,255,255);
    leds.setColorRGB(2,255,255,255);
  }
   if(clock.hour==2){
    leds.setColorRGB(0,255,0,0);//allumer la led 0 en vert(255)
    leds.setColorRGB(1,255,255,255);
    leds.setColorRGB(2,255,255,255);
 }
 if(clock.hour==3){
  leds.setColorRGB(0,255,255,255);
 leds.setColorRGB(1,0,255,0);
 leds.setColorRGB(2,255,255,255);
 }
  if(clock.hour==4){
    leds.setColorRGB(0,0,255,0);
    leds.setColorRGB(1,0,255,0);
    leds.setColorRGB(2,255,255,255);
 }
 if(clock.hour==5){
 leds.setColorRGB(0,255,0,0);
 leds.setColorRGB(1,0,255,0);
 leds.setColorRGB(2,255,255,255);
 }
 
 if(clock.hour==6){
    leds.setColorRGB(0,255,255,255);
    leds.setColorRGB(1,255,0,0);
    leds.setColorRGB(2,255,255,255);
 }
 if(clock.hour==7){
  lcd.print("petit dej");
  leds.setColorRGB(0,0,255,0);
    leds.setColorRGB(1,255,0,0);
    leds.setColorRGB(2,255,255,255);
 }
 if(clock.hour==8){
  leds.setColorRGB(0,255,0,0);
    leds.setColorRGB(1,255,0,0);
    leds.setColorRGB(2,255,255,255);
 }
 if(clock.hour==9){
  leds.setColorRGB(0,255,255,255);
  leds.setColorRGB(1,255,255,255);
  leds.setColorRGB(2,0,255,0);
 }
 if(clock.hour==11){
 leds.setColorRGB(0,255,0,0);
 leds.setColorRGB(1,255,255,255);
 leds.setColorRGB(2,0,255,0);
 }
 if(clock.hour==10){
  leds.setColorRGB(0,0, 255, 0);
  leds.setColorRGB(1,255, 255, 255);
  leds.setColorRGB(2, 0, 255, 0);
 }
 if(clock.hour==12){
  lcd.print("manger bio");
  delay(1000);
  lcd.clear();
 leds.setColorRGB(0,255,255,255);
 leds.setColorRGB(1,0,255,0);
 leds.setColorRGB(2,0,255,0);
 }
 if(clock.hour==13){
 leds.setColorRGB(0,0,255,0);
 leds.setColorRGB(1,0,255,0);
 leds.setColorRGB(2,0,255,0);
 }
 if(clock.hour==14){
 leds.setColorRGB(0,255,0,0);
 leds.setColorRGB(1,0,255,0);
 leds.setColorRGB(2,0,255,0);
 }
 if(clock.hour==15){
 leds.setColorRGB(0,255,255,255);
 leds.setColorRGB(1,255,0,0);
 leds.setColorRGB(2,0,255,0);
 }
 if(clock.hour==16){
 leds.setColorRGB(0,0,255,0);
 leds.setColorRGB(1,255,0,0);
 leds.setColorRGB(2,0,255,0);
 }
 if(clock.hour==17){
  if(clock.minute==59){
  lcd.print("Eleanor Worthington Cox");
  delay(1000);
  lcd.clear();
  }
 }
 if(clock.hour==18){
  lcd.print("vive la SI");
  delay(1000);
  lcd.clear();
  leds.setColorRGB(0,255,255,255);
 leds.setColorRGB(1,255,255,255);
 leds.setColorRGB(2,255,0,0);
 }
 if(clock.hour==19){
 leds.setColorRGB(0,0,255,0);
 leds.setColorRGB(1,255,255,255);
 leds.setColorRGB(2,255,0,0);
 }
 if(clock.hour==20){
  leds.setColorRGB(0,255,0,0);
  leds.setColorRGB(1,255,255,255);
  leds.setColorRGB(2,255,0,0);
 }
 if(clock.hour==21){
  leds.setColorRGB(0,3,3,3);
  leds.setColorRGB(1,0,3,0);
  leds.setColorRGB(2,3,0,0);
 }
 if(clock.hour==22){
  leds.setColorRGB(0,0,3,0);
  leds.setColorRGB(1,0,3,0);
  leds.setColorRGB(2,3,0,0);
 }
 if(clock.hour==23){
  leds.setColorRGB(0,3,0,0);
  leds.setColorRGB(1,0,3,0);
  leds.setColorRGB(2,0,3,0);
  delay(1000);
  leds.setColorRGB(0,0,0,3);
  leds.setColorRGB(1,3,3,3);
  leds.setColorRGB(2,3,0,0);
 }
 if(clock.minute==0){
    led.setColorRGB(0,255,255,255);
    led.setColorRGB(1,255,255,255);
    led.setColorRGB(2,255,255,255);
  }
  if(clock.minute==1){
    led.setColorRGB(0,0,255,0);
    led.setColorRGB(1,255,255,255);
    led.setColorRGB(2,255,255,255);
  }
   if(clock.minute==2){
    led.setColorRGB(0,255,0,0);
    led.setColorRGB(1,255,255,255);
    led.setColorRGB(2,255,255,255);
 }
 if(clock.minute==3){
  led.setColorRGB(0,255,255,255);
 led.setColorRGB(1,0,255,0);
 led.setColorRGB(2,255,255,255);
 }
  if(clock.minute==4){
    led.setColorRGB(0,0,255,0);
    led.setColorRGB(1,0,255,0);
    led.setColorRGB(2,255,255,255);
 }
 if(clock.minute==5){
 led.setColorRGB(0,255,0,0);
 led.setColorRGB(1,0,255,0);
 led.setColorRGB(2,255,255,255);
 }
 
 if(clock.minute==6){
    led.setColorRGB(0,255,255,255);
    led.setColorRGB(1,255,0,0);
    led.setColorRGB(2,255,255,255);
 }
 if(clock.minute==7){
  led.setColorRGB(0,0,255,0);
    led.setColorRGB(1,255,0,0);
    led.setColorRGB(2,255,255,255);
 }
 if(clock.minute==8){
  led.setColorRGB(0,255,0,0);
    led.setColorRGB(1,255,0,0);
    led.setColorRGB(2,255,255,255);
 }
 if(clock.minute==9){
  led.setColorRGB(0,255,255,255);
  led.setColorRGB(1,255,255,255);
  led.setColorRGB(2,0,255,0);
 }
 if(clock.minute==10){
  led.setColorRGB(0,0, 255, 0);
  led.setColorRGB(1,255, 255, 255);
  led.setColorRGB(2, 0, 255, 0);
  
 }
 if(clock.minute==11){
 led.setColorRGB(0,255,0,0);
 led.setColorRGB(1,255,255,255);
 led.setColorRGB(2,0,255,0);
 }
 if(clock.minute==12){
  lcd.print("manger bio");
  delay(1000);
  lcd.clear();
 led.setColorRGB(0,255,255,255);
 led.setColorRGB(1,0,255,0);
 led.setColorRGB(2,0,255,0);
 }
 if(clock.minute==13){
 led.setColorRGB(0,0,255,0);
 led.setColorRGB(1,0,255,0);
 led.setColorRGB(2,0,255,0);
 }
 if(clock.minute==14){
 led.setColorRGB(0,255,0,0);
 led.setColorRGB(1,0,255,0);
 led.setColorRGB(2,0,255,0);
 }
 if(clock.minute==15){
 led.setColorRGB(0,255,255,255);
 led.setColorRGB(1,255,0,0);
 led.setColorRGB(2,0,255,0);
 }
 if(clock.minute==16){
 led.setColorRGB(0,0,255,0);
 led.setColorRGB(1,255,0,0);
 led.setColorRGB(2,0,255,0);
 }
 if(clock.minute==17){
  if(clock.minute==59){
  lcd.print("Eleanor Worthington Cox");
  delay(1000);
  lcd.clear();
  }
 }
 if(clock.minute==18){
  lcd.print("vive la SI");
  delay(1000);
  lcd.clear();
  led.setColorRGB(0,255,255,255);
 led.setColorRGB(1,255,255,255);
 led.setColorRGB(2,255,0,0);
 }
 if(clock.minute==19){
 led.setColorRGB(0,0,255,0);
 led.setColorRGB(1,255,255,255);
 led.setColorRGB(2,255,0,0);
 }
 if(clock.minute==20){
  led.setColorRGB(0,255,0,0);
  led.setColorRGB(1,255,255,255);
  led.setColorRGB(2,255,0,0);
 }
 if(clock.minute==21){
  led.setColorRGB(0,3,3,3);
  led.setColorRGB(1,0,3,0);
  led.setColorRGB(2,3,0,0);
 }
 if(clock.minute==22){
  led.setColorRGB(0,0,3,0);
  led.setColorRGB(1,0,3,0);
  led.setColorRGB(2,3,0,0);
 }
 if(clock.minute==23){
  led.setColorRGB(0,3,0,0);
  led.setColorRGB(1,0,3,0);
  led.setColorRGB(2,0,3,0);
  delay(1000);
  led.setColorRGB(0,0,0,3);
  led.setColorRGB(1,3,3,3);
  led.setColorRGB(2,3,0,0);
 }
 if(clock.minute==24){
  led.setColorRGB(0,255, 255 ,255);
  led.setColorRGB(1, 255, 0, 0);
  led.setColorRGB(2, 255 ,0, 0);
  }
 if(clock.minute==25){
  led.setColorRGB(0,0, 255 ,0);
  led.setColorRGB(1, 255, 0, 0);
  led.setColorRGB(2, 255 ,0, 0);
  }
 if(clock.minute==26){
  led.setColorRGB(0,255, 0 ,0);
  led.setColorRGB(1, 255, 0, 0);
  led.setColorRGB(2, 255 ,0, 0);
  }
 if(clock.minute==27){
  led.setColorRGB(0, 255, 255, 255);
  led.setColorRGB(1, 255, 255, 255);
  led.setColorRGB(2, 255, 255, 255);
  led.setColorRGB(3, 0, 255, 0);
 }
printTime();

}
void printTime()
{
  clock.getTime();
  lcd.print(clock.hour, DEC);//afficher l'heure sur le LCD
  lcd.print("h");
  lcd.print(clock.minute, DEC);//afficher les minute sur le LCD
  if(clock.hour>8){//si l'heure est supérieur a 8
  Serial.print("vive la SI");//alors on affiche vive la SI
  Serial.println("");
  }
  if(clock.hour==23){
    Serial.print("vive la france");
  }
  Serial.println("");
  delay(1000);//delay d'affichage 1s
  lcd.clear();//quand le delay et dépaser éffacer
}
