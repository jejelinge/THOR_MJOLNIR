
#include "Adafruit_NeoPixel.h"

// Which pin on the Arduino is connected to the NeoPixels?
#define PIN        4 // On Trinket or Gemma, suggest changing this to 1

// How many NeoPixels are attached to the Arduino?
#define NUMPIXELS 9 // Popular NeoPixel ring size

//========================USEFUL VARIABLES=============================
int led_ring_brightness = 255; // Adjust it 0 to 255
//=====================================================================

// When setting up the NeoPixel library, we tell it how many pixels,
Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);


void setup() {

  pinMode(4, OUTPUT);
  Serial.begin(9600);
  pixels.begin(); // INITIALIZE NeoPixel strip object (REQUIRED)
  pixels.setBrightness(255);
  
}

void loop() {

  pixels.clear(); // Set all pixel colors to 'off'
    for(int i=0; i<9;i++){
  pixels.setPixelColor(i, pixels.Color(0,150,255));
  }
pixels.show();
delay(100);

}

