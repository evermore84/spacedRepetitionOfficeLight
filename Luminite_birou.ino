#include <FastLED.h>
#define DATA_PIN 6
#define NUM_LEDS 144

#define COLOR_ORDER GRB

CRGB leds[NUM_LEDS];

void setup(){
  FastLED.addLeds<WS2811, DATA_PIN, GRB>(leds, NUM_LEDS);

}
void loop(){



         for(int x = 0; x < NUM_LEDS; x++){
          leds[x] = CRGB(0,255,0);
      }

      // Display the colors we just set on the actual LEDs
  delay(1200000); 
  LEDS.show();

        for(int x = 0; x < NUM_LEDS; x++){
          leds[x] = CRGB(0,0,255);
      }

      // Display the colors we just set on the actual LEDs
  delay(420000); 
  LEDS.show();
  

  
////start from red
//  for( int colorStep=0; colorStep <= 255; colorStep++ ) {
//
//  int r = 255;
//  int g = 0;
//  int b = colorStep;
//
//  // Now loop though each of the LEDs and set each one to the current color
//  for(int x = 0; x < NUM_LEDS; x++){
//      leds[x] = CRGB(r,g,b);
//  }
//
//  // Display the colors we just set on the actual LEDs
//      delay(1); 
//      FastLED.show();
//      }
//
//    //into blue
//      for( int colorStep=255; colorStep >= 0; colorStep-- ) {
//
//      int r = colorStep;
//      int g = 0;
//      int b = 255;
//
//      // Now loop though each of the LEDs and set each one to the current color
//      for(int x = 0; x < NUM_LEDS; x++){
//          leds[x] = CRGB(r,g,b);
//      }
//
//      // Display the colors we just set on the actual LEDs
//  delay(1); 
//  FastLED.show();
//  }

////start from blue
//  for( int colorStep=0; colorStep <= 255; colorStep++ ) {
//
//      int r = 0;
//      int g = colorStep;
//      int b = 255; 
//
//      // Now loop though each of the LEDs and set each one to the current color
//      for(int x = 0; x < NUM_LEDS; x++){
//          leds[x] = CRGB(r,g,b);
//      }
//
//      // Display the colors we just set on the actual LEDs
//  delay(3); 
//  FastLED.show();
//  }
//
////into green
//  for( int colorStep=255; colorStep >= 0; colorStep-- ) {
//
//      int r = 0;
//      int g = 255;
//      int b = colorStep; 
//
//      // Now loop though each of the LEDs and set each one to the current color
//      for(int x = 0; x < NUM_LEDS; x++){
//          leds[x] = CRGB(r,g,b);
//      }
//
//      // Display the colors we just set on the actual LEDs
//  delay(1); 
//  LEDS.show();
//  }

//start from green
//  for( int colorStep=0; colorStep <= 255; colorStep++ ) {
//
//      int r = colorStep;
//      int g = 255;
//      int b = 0;
//
//      // Now loop though each of the LEDs and set each one to the current color
//      for(int x = 0; x < NUM_LEDS; x++){
//          leds[x] = CRGB(r,g,b);
//      }
//
//      // Display the colors we just set on the actual LEDs
//  delay(1); 
//  LEDS.show();
//  }

////into yellow
//  for( int colorStep=255; colorStep >= 0; colorStep-- ) {
//
//      int r = 255;
//      int g = colorStep;
//      int b = 0;
//
//      // Now loop though each of the LEDs and set each one to the current color
//      for(int x = 0; x < NUM_LEDS; x++){
//          leds[x] = CRGB(r,g,b);
//      }
//
//      // Display the colors we just set on the actual LEDs
//  delay(1); 
//  LEDS.show();
//  }
//

} //end main loop
