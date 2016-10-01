// NeoPixel Ring simple sketch (c) 2013 Shae Erisson
// released under the GPLv3 license to match the rest of the AdaFruit NeoPixel library

#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
  #include <avr/power.h>
#endif

// Which pin on the Arduino is connected to the NeoPixels?
// On a Trinket or Gemma we suggest changing this to 1
#define PIN            6

// How many NeoPixels are attached to the Arduino?
#define NUMPIXELS      144

// When we setup the NeoPixel library, we tell it how many pixels, and which pin to use to send signals.
// Note that for older NeoPixel strips you might need to change the third parameter--see the strandtest
// example for more information on possible values.
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

int delayval = 10; // delay for half a second



int a,b,c,d,e,f,g,h,z,x;
int C1,C2,C3,C4,C5,c1,c2,c3,c4,c5;
int M1,M2,M3,m1,m2,m3;
int t,l,next;


 void mode1() {
  for (int i=0;i<5;i++){
        pixels.setPixelColor(i,pixels.Color(0,5,20));
        pixels.show();
      }
      for (int i=11;i<21;i++){
        pixels.setPixelColor(i,pixels.Color(0,5,20));
        pixels.show();
      }
      for (int i=31;i<44;i++){
        pixels.setPixelColor(i,pixels.Color(0,5,20));
        pixels.show();
      }
      for (int i=58;i<75;i++){
        pixels.setPixelColor(i ,pixels.Color(0,5,20));
        pixels.show();
      }
      for (int i=92;i<112;i++){
        pixels.setPixelColor(i,pixels.Color(0,5,20));
        pixels.show();
      }
      
      
      
      a=66;
      for (int i=5;i<11;i++){
        pixels.setPixelColor(i,pixels.Color(20,0,0));
        pixels.setPixelColor(i-5,pixels.Color(0,0,0));
        pixels.show();
        delay(a);
      }
       for (int i=21;i<31;i++){
        pixels.setPixelColor(i,pixels.Color(20,0,0));
        pixels.setPixelColor(i-10,pixels.Color(0,0,0));
        pixels.show();
        delay(a);
      }
       for (int i=44;i<58;i++){
        pixels.setPixelColor(i,pixels.Color(20,0,0));
        pixels.setPixelColor(i-13,pixels.Color(0,0,0));
        pixels.show();
        delay(a);
      }
       for (int i=75;i<92;i++){
        pixels.setPixelColor(i,pixels.Color(20,0,0));
        pixels.setPixelColor(i-17,pixels.Color(0,0,0));
        pixels.show();
        delay(a);
      }
       for (int i=112;i<133;i++){
        pixels.setPixelColor(i,pixels.Color(20,0,0));
        pixels.setPixelColor(i-20,pixels.Color(0,0,0));
        pixels.show();
        delay(a);
      }
      
      
      
      
      
      for (int i=0;i<133;i++){
        pixels.setPixelColor(i,pixels.Color(7,3,5));
        pixels.show();
      }
      for(int m=0;m<3;m++){
       for (int i=0;i<133;i++){
        pixels.setPixelColor(i,pixels.Color(7,3,5));
      }
      pixels.show();
      delay(1000);
      for (int i=0;i<133;i++){
        pixels.setPixelColor(i,pixels.Color(0,0,0));
      }
      pixels.show();
      delay(400);
      }
}





void mode2(){
    //circle mode
      for (int i=0;i<133;i++){
      a=random(0,255);
      b=random(0,255);
      c=random(0,255);
      pixels.setPixelColor(i, pixels.Color(a,b,c));
      pixels.setPixelColor(i+1, pixels.Color(a,b,c));
      pixels.setPixelColor(i+2, pixels.Color(a,b,c));
      pixels.setPixelColor(i+3, pixels.Color(a,b,c)); // Moderately bright green color.
      pixels.setPixelColor(i-1, pixels.Color(0,0,0)); 
      pixels.setPixelColor(i-2, pixels.Color(0,0,0));// Moderately bright green color.
      pixels.setPixelColor(i-3, pixels.Color(0,0,0));
      pixels.setPixelColor(i-4, pixels.Color(0,0,0));
      pixels.setPixelColor(133, pixels.Color(0,0,0));
      pixels.setPixelColor(134, pixels.Color(0,0,0));
      pixels.setPixelColor(135, pixels.Color(0,0,0));
      pixels.show(); // This sends the updated pixel color to the hardware.
      delay(delayval); // Delay for a period of time (in milliseconds).
    }
         pixels.setPixelColor(132, pixels.Color(0,0,0));//end the last one wihich can't in loop
      pixels.show(); // This sends the updated pixel color to the hardware.
      }
      
      
      
void mode3(){
  C1=0;C2=14;C3=35;C4=64;C5=99;
  if (M1>13){
    M1=0;M2=14;M3=35;
  }
  
  for (int i=1;i<625;i++){
    c1=i%44;
    c2=i%31;
    c3=i%22;
    c4=i%18;
    c5=i%14;
    m1=i%528;
    m2=i%372;
    m3=i%264;
    if (c1==0){
      C1=C1+1;
    }
    if (c2==0){
      C2++;
    }
    if (c3==0){
      C3++;
    }
    if (c4==0){
      C4++;
    }
    if (c5==0){
      C5++;
    }
    pixels.setPixelColor(C1, pixels.Color(0,5,20));
    pixels.setPixelColor(C2, pixels.Color(0,5,20));
    pixels.setPixelColor(C3, pixels.Color(0,5,20));
    pixels.setPixelColor(C4, pixels.Color(0,5,20));
    pixels.setPixelColor(C5, pixels.Color(0,5,20));

     
    pixels.setPixelColor(C1-1, pixels.Color(0,0,0));
    pixels.setPixelColor(C2-1, pixels.Color(0,0,0));
    pixels.setPixelColor(C3-1, pixels.Color(0,0,0));
    pixels.setPixelColor(C4-1, pixels.Color(0,0,0));
    pixels.setPixelColor(C5-1, pixels.Color(0,0,0));

    pixels.show();
    
    pixels.setPixelColor(C1, pixels.Color(0,0,0));
    pixels.setPixelColor(C2, pixels.Color(0,0,0));
    pixels.setPixelColor(C3, pixels.Color(0,0,0));
    pixels.setPixelColor(C4, pixels.Color(0,0,0));
    pixels.setPixelColor(C5, pixels.Color(0,0,0));
    
    if (m1==0){
     M1++;
    }
    if (m2==0){
     M2=M2+z;
     x=-x; 
    }
    if (m3==0){
     M3++;
    }
    pixels.setPixelColor(M1, pixels.Color(20,0,0));
    pixels.setPixelColor(M2, pixels.Color(20,0,0));
    pixels.setPixelColor(M3, pixels.Color(20,0,0));
    
    pixels.setPixelColor(M1-1, pixels.Color(0,0,0));
    pixels.setPixelColor(M2-z, pixels.Color(0,0,0));
    pixels.setPixelColor(M3-1, pixels.Color(0,0,0));
    
    if (x>0){
      z=2;
    }
    if (x<0){
      z=1;
    }
    
    
    
  }
  pixels.setPixelColor(C5, pixels.Color(0,0,0));






}





void mode3b(){
  C1=0;C2=14;C3=35;C4=64;C5=99;
  
  for (int i=1;i<t;i++){
    c1=i%44;
    c2=i%31;
    c3=i%22;
    if (c1==0){
      C1=C1+1;
    }
    if (c2==0){
      C2++;
    }
    if (c3==0){
      C3++;
    }
    pixels.setPixelColor(C1, pixels.Color(0,0,20));
    pixels.setPixelColor(C2, pixels.Color(0,0,20));
    pixels.setPixelColor(C3, pixels.Color(0,0,20));


     
    pixels.setPixelColor(C1-1, pixels.Color(0,0,0));
    pixels.setPixelColor(C2-1, pixels.Color(0,0,0));
    pixels.setPixelColor(C3-1, pixels.Color(0,0,0));

    pixels.show();
    

    
    
  }





}

void mode4(){
   for (int i=0;i<300;i++){
      a=random(0,255);
      b=random(0,255);
      c=random(0,255);
      d=random(0,143);
      e=random(0,143);
      f=random(0,143);
      g=random(0,143);
      h=random(0,143);
      pixels.setPixelColor(d, pixels.Color(a,b,c));
      pixels.setPixelColor(e, pixels.Color(0,0,0));
      pixels.setPixelColor(f, pixels.Color(0,0,0));
      pixels.setPixelColor(g, pixels.Color(0,0,0));
      pixels.setPixelColor(h, pixels.Color(0,0,0));
      pixels.show(); // This sends the updated pixel color to the hardware.
      delay(20); // Delay for a period of time (in milliseconds).
    }
  
}










void setup() {
  // This is for Trinket 5V 16MHz, you can remove these three lines if you are not using a Trinket
#if defined (__AVR_ATtiny85__)
  if (F_CPU == 16000000) clock_prescale_set(clock_div_1);
#endif
  // End of trinket special code

  pixels.begin(); // This initializes the NeoPixel library.
  Serial.begin(9600);
  next=1;
  M1=14;
  z=1;
  x=1;
}

void loop() {
  l=analogRead(0);
  Serial.println(l);
    if(l<50){
    next=next+1;
  }
  if (next==1){
  mode3();
  }
  if (next==2){
  mode2();
  }
  if (next==3){
    mode1();
  }
  if (next==4){
    mode4();
  }

  if (next>4){
    next=0;
  }
  //delay(1000);
 // mode3();
  //mode3();
  //mode3();
 // mode4();


  // For a set of NeoPixels the first NeoPixel is 0, second is 1, all the way up to the count of pixels minus one.



    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    //for (int i=0;i<NUMPIXELS;i++){
     // a=random(0,255);
     // b=random(0,255);
     // c=random(0,255);
     
     
      //circle mode
      /*pixels.setPixelColor(i, pixels.Color(a,b,c));
      pixels.setPixelColor(i+1, pixels.Color(a,b,c));
      pixels.setPixelColor(i+2, pixels.Color(a,b,c));
      pixels.setPixelColor(i+3, pixels.Color(a,b,c)); // Moderately bright green color.
      pixels.setPixelColor(i-1, pixels.Color(0,0,0)); 
      pixels.setPixelColor(i-2, pixels.Color(0,0,0));// Moderately bright green color.
      pixels.setPixelColor(i-3, pixels.Color(0,0,0));
      pixels.setPixelColor(i-4, pixels.Color(0,0,0));
      pixels.setPixelColor(144, pixels.Color(0,0,0));
      pixels.show(); // This sends the updated pixel color to the hardware.
      delay(delayval); // Delay for a period of time (in milliseconds).
    }
         pixels.setPixelColor(143, pixels.Color(0,0,0));//end the last one wihich can't in loop
      pixels.show(); // This sends the updated pixel color to the hardware.*/ 
      
      
      
      //test
      //pixels.setPixelColor(132, pixels.Color(255,0,0));
      //pixels.show();
      //resule 0~13 for circle1 14~34 for circle2 35~63 for circle3 64~98 for circle4 99~143 for circle5
      
      /*for (int i=0;i<7;i++){
        pixels.setPixelColor(i,pixels.Color(0,0,20));
        pixels.show();
      }
      for (int i=14;i<24;i++){
        pixels.setPixelColor(i,pixels.Color(0,0,20));
        pixels.show();
      }
      for (int i=35;i<49;i++){
        pixels.setPixelColor(i,pixels.Color(0,0,20));
        pixels.show();
      }
      for (int i=64;i<81;i++){
        pixels.setPixelColor(i,pixels.Color(0,0,20));
        pixels.show();
      }
      for (int i=99;i<121;i++){
        pixels.setPixelColor(i,pixels.Color(0,0,20));
        pixels.show();
      }
      
      
      
      a=20;
      for (int i=7;i<14;i++){
        pixels.setPixelColor(i,pixels.Color(20,0,0));
        pixels.setPixelColor(i-7,pixels.Color(0,0,0));
        pixels.show();
        delay(a);
      }
       for (int i=24;i<35;i++){
        pixels.setPixelColor(i,pixels.Color(20,0,0));
        pixels.setPixelColor(i-10,pixels.Color(0,0,0));
        pixels.show();
        delay(a);
      }
       for (int i=49;i<63;i++){
        pixels.setPixelColor(i,pixels.Color(20,0,0));
        pixels.setPixelColor(i-14,pixels.Color(0,0,0));
        pixels.show();
        delay(a);
      }
       for (int i=81;i<98;i++){
        pixels.setPixelColor(i,pixels.Color(20,0,0));
        pixels.setPixelColor(i-17,pixels.Color(0,0,0));
        pixels.show();
        delay(a);
      }
       for (int i=121;i<143;i++){
        pixels.setPixelColor(i,pixels.Color(20,0,0));
        pixels.setPixelColor(i-22,pixels.Color(0,0,0));
        pixels.show();
        delay(a);
      }
      
      
      
      
      
      for (int i=0;i<144;i++){
        pixels.setPixelColor(i,pixels.Color(0,20,0));
        pixels.show();
      }
      for(int m=0;m<1;){
       for (int i=0;i<144;i++){
        pixels.setPixelColor(i,pixels.Color(0,0,0));
      }
      pixels.show();
      delay(400);
      for (int i=0;i<144;i++){
        pixels.setPixelColor(i,pixels.Color(0,20,0));
      }
      pixels.show();
      delay(400);
      }*/
      
      
 
      
      

    
    /*pixels.setPixelColor(0, pixels.Color(255,0,0)); // Moderately bright green color.
    pixels.show(); 
    delay(delayval);
    pixels.setPixelColor(1, pixels.Color(0,255,0)); 
    pixels.show(); 
    delay(delayval);
    pixels.setPixelColor(2, pixels.Color(0,0,255)); 
    pixels.show(); 
    delay(delayval); // Delay for a period of time (in milliseconds).
    pixels.setPixelColor(0, pixels.Color(0,0,0)); 
    pixels.setPixelColor(1, pixels.Color(0,0,0)); 
    pixels.setPixelColor(2, pixels.Color(0,0,0)); 
    pixels.show();
    delay(delayval);*/
}
