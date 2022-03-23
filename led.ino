#include <FastLED.h>

#define NUM_LEDS  60
#define LED_PIN   6

CRGB leds[NUM_LEDS];

void setup() {
  FastLED.addLeds<WS2812B, LED_PIN, GRB>(leds, NUM_LEDS);
  FastLED.setBrightness(150);
}

void loop() {
  //from 1 to 30 light leds.
  for (int i = 0;i < 30; i++) {
    leds[i] = CRGB(50, 0, 0);//choosing color
    
  }//from 30 to 60 light leds.
  for (int i = 31;i < 60; i++) {
    leds[i] = CRGB(0, 0, 50);//choosing color
    
  }
  
  FastLED.show();
} /*

#include <FastLED.h>

#define NUM_LEDS  60
#define LED_PIN   6

CRGB leds[NUM_LEDS];

uint8_t hue = 0;

void setup() {
  FastLED.addLeds<WS2812B, LED_PIN, GRB>(leds, NUM_LEDS);
  FastLED.setBrightness(250);
}

void loop() {
  
  for (int i = 0; i < NUM_LEDS; i++) {
    //leds[i] = CHSV(hue, 255, 255);
    leds[i] = CHSV(hue + (i * 10), 255, 255);
  }

  EVERY_N_MILLISECONDS(15){
    hue++;
  }

  FastLED.show();
}*/
