/*************************************************
 * Beep Toy: Melodies
 *************************************************
Melodies description:
- melodyX[] are notes in melody
- noteDurationsX[] are note durations i. e. note types 4 = quarter note, 8 = eight note, etc.
- lengthOfMelodyX is number of notes in melody * 2.
*/

// Melody #1
int melody1[] = { NOTE_C4, NOTE_G3, NOTE_G3, NOTE_A3, NOTE_G3, NO_SOUND, NOTE_B3, NOTE_C4 };
int noteDurations1[] = { 4, 8, 8, 4, 4, 4, 4, 4 };
int lengthOfMelody1 = 16;

// Melody #2
int melody2[] = { NOTE_C4, NOTE_C4, NOTE_G3, NOTE_G3, NOTE_A3, NOTE_A3, NOTE_G3, NOTE_F3, NOTE_F3, NOTE_E3, NOTE_E3, NOTE_D3, NOTE_D3, NOTE_C4 };
int noteDurations2[] = { 8, 8, 8, 8, 8, 8, 4, 8, 8, 8, 8, 8, 8, 4 };
int lengthOfMelody2 = 28;

// Melody #3 (Beverly Hills Cop)
int melody3[] = { NOTE_D4, NO_SOUND, NOTE_F4, NOTE_D4, NO_SOUND, NOTE_D4, NOTE_G4, NOTE_D4, NOTE_C4, NOTE_D4, NO_SOUND, NOTE_A4, NOTE_D4, NO_SOUND, NOTE_D4, NOTE_AS4, NOTE_A4, NOTE_F4, NOTE_D4, NOTE_A4, NOTE_D5, NOTE_D4, NOTE_C4, NO_SOUND, NOTE_C4, NOTE_A3, NOTE_E4, NOTE_D4, NO_SOUND };
int noteDurations3[] = { 8, 8, 6, 16, 16, 16, 8, 8, 8, 8, 8, 6, 16, 16, 16, 8, 8, 8, 8, 8, 8, 16, 16, 16, 16, 8, 8, 2, 2 };
int lengthOfMelody3 = 58;

// Melody #4 (Super Mario)
int melody4[] = { NOTE_E7, NOTE_E7, 0, NOTE_E7, 0, NOTE_C7, NOTE_E7, 0, NOTE_G7, 0, 0,  0, NOTE_G6, 0, 0, 0,  NOTE_C7, 0, 0, NOTE_G6, 0, 0, NOTE_E6, 0, 0, NOTE_A6, 0, NOTE_B6, 0, NOTE_AS6, NOTE_A6, 0, NOTE_G6, NOTE_E7, NOTE_G7, NOTE_A7, 0, NOTE_F7, NOTE_G7, 0, NOTE_E7, 0,NOTE_C7, NOTE_D7, NOTE_B6, 0, 0, NOTE_C7, 0, 0, NOTE_G6, 0, 0, NOTE_E6, 0, 0, NOTE_A6, 0, NOTE_B6, 0, NOTE_AS6, NOTE_A6, 0, NOTE_G6, NOTE_E7, NOTE_G7, NOTE_A7, 0, NOTE_F7, NOTE_G7, 0, NOTE_E7, 0,NOTE_C7, NOTE_D7, NOTE_B6, 0, 0 };
int noteDurations4[] = { 12, 12, 12, 12,  12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 9, 9, 9, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 9, 9, 9, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12 };
int lengthOfMelody4 = 156;

