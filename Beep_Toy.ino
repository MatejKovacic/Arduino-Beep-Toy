/*  Arduino Beep Toy
 *  
 *  (CC) Matej Kovačič
 *  
 *  Arduino firmware for playing various melodies.
 *  Device plays a melody and waits 5 seconds. Then melody is played again.

Wiring
======
D9 --- 220 Ohm --- buzzer --- GND

Optionally:
4 x 1.5 V AAA batteries connect to VIN (+) and GND (-)
*/

#include "notes.h"     // include notes descriptions
#include "melodies.h"    // include library of melodies (currently contains 4 melodies)

const int buzzer = 9;    // buzzer is connected to D9

// Define which melody we would like to play. Set the names for all three variables:
int* melody = melody1;
int* noteDurations = noteDurations1;
int lengthOfMelody = lengthOfMelody1;

void setup() {
    Serial.begin(9600);                      // initialize serial port (9600 bps)
    Serial.println("Igranje glasbe...");     // print text to serial console
    Serial.print("Ta melodija ima "); Serial.print(lengthOfMelody); Serial.println(" not.");
    Serial.println();
}

void loop() {
  for (int thisNote = 0; thisNote < lengthOfMelody/2; thisNote++) {
    int noteDuration = 1000 / noteDurations[thisNote];  // compute note duration
    tone(buzzer, melody[thisNote], noteDuration);       // play note
    int pauseBetweenNotes = noteDuration * 1.30;        // add small pause after each note
    delay(pauseBetweenNotes);                           // (note duration + 30% is OK)
    noTone(buzzer);                                     // stop playing
  }
  delay(5000);                                          // wait for 5 seconds and then play again
}
