#include "pitches.h" //musical note constants

#define PLAY_RANDOM_SONGS 0

//Mario theme song
int mario_melody[] = {
  NOTE_E5, NOTE_E5, NOTE_E5, 0, NOTE_C5, NOTE_E5, NOTE_G5, NOTE_G4,
  
  NOTE_C5, 0, NOTE_G4, 0, NOTE_E4, 0, NOTE_A4, NOTE_B4, 0, NOTE_AS4, NOTE_A4,
  NOTE_G4, NOTE_E5, NOTE_G5, NOTE_A5, NOTE_F5, NOTE_G5, 0, NOTE_E5, NOTE_C5, NOTE_D5, NOTE_B4, 0,
  
  NOTE_C5, 0, NOTE_G4, 0, NOTE_E4, 0, NOTE_A4, NOTE_B4, 0, NOTE_AS4, NOTE_A4,
  NOTE_G4, NOTE_E5, NOTE_G5, NOTE_A5, NOTE_F5, NOTE_G5, 0, NOTE_E5, NOTE_C5, NOTE_D5, NOTE_B4, 0,

  0, NOTE_G5, NOTE_FS5, NOTE_F5, NOTE_E5, 0, NOTE_F5, 0, NOTE_GS4, NOTE_A4, NOTE_C5, 0, NOTE_A4, NOTE_C5, NOTE_D5,
  0, NOTE_G5, NOTE_FS5, NOTE_F5, NOTE_E5, 0, NOTE_F5, 0, NOTE_C6, NOTE_C6, NOTE_C6, 0,
  0, NOTE_G5, NOTE_FS5, NOTE_F5, NOTE_DS5, 0, NOTE_F5, 0, NOTE_GS4, NOTE_A4, NOTE_C5, 0, NOTE_A4, NOTE_C5, NOTE_DS5,
  0, NOTE_DS5, 0, NOTE_D5, 0, NOTE_C5, 0,

  0, NOTE_G5, NOTE_FS5, NOTE_F5, NOTE_E5, 0, NOTE_F5, 0, NOTE_GS4, NOTE_A4, NOTE_C5, 0, NOTE_A4, NOTE_C5, NOTE_D5,
  0, NOTE_G5, NOTE_FS5, NOTE_F5, NOTE_E5, 0, NOTE_F5, 0, NOTE_C6, NOTE_C6, NOTE_C6, 0,
  0, NOTE_G5, NOTE_FS5, NOTE_F5, NOTE_E5, 0, NOTE_F5, 0, NOTE_GS4, NOTE_A4, NOTE_C5, 0, NOTE_A4, NOTE_C5, NOTE_D5,
  0, NOTE_DS5, 0, NOTE_D5, 0, NOTE_C5, 0,

  NOTE_C5, NOTE_C5, 0, NOTE_C5, 0, NOTE_C5, NOTE_D5, 0, NOTE_E5, NOTE_C5, 0, NOTE_A4, NOTE_G4,
  NOTE_C5, NOTE_C5, 0, NOTE_C5, 0, NOTE_C5, NOTE_D5, NOTE_E5, 0,
  NOTE_C5, NOTE_C5, 0, NOTE_C5, 0, NOTE_C5, NOTE_D5, 0, NOTE_E5, NOTE_C5, 0, NOTE_A4, NOTE_G4

  
};

int mario_timing[] = {
  //8
  150, 300, 150, 150, 150, 300, 600, 600, //8

  //23
  300, 150, 150, 300, 300, 150, 300, 150, 150, 150, 300, //11
  200, 200, 200, 300, 150, 150, 150, 300, 150, 150, 150, 300, //12

  //23
  300, 150, 150, 300, 300, 150, 300, 150, 150, 150, 300, //11
  200, 200, 200, 300, 150, 150, 150, 300, 150, 150, 150, 300, //12

  //49
  300, 150, 150, 150, 150, 150, 150, 150, 150, 150, 150, 150, 150, 150, 150, //15
  300, 150, 150, 150, 150, 150, 150, 150, 300, 150, 300, 300, //12
  300, 150, 150, 150, 150, 150, 150, 150, 150, 150, 150, 150, 150, 150, 150, //15
  300, 300, 150, 150, 300, 600, 600, //7

  //49
  300, 150, 150, 150, 150, 150, 150, 150, 150, 150, 150, 150, 150, 150, 150, //15
  300, 150, 150, 150, 150, 150, 150, 150, 300, 150, 300, 300, //12
  300, 150, 150, 150, 150, 150, 150, 150, 150, 150, 150, 150, 150, 150, 150, //15
  300, 300, 150, 150, 300, 600, 600, //7

  150, 150, 150, 150, 150, 150, 150, 150, 150, 150, 150, 150, 600, //13
  150, 150, 150, 150, 150, 150, 150, 150, 1200, //9
  150, 150, 150, 150, 150, 150, 150, 150, 150, 150, 150, 150, 600 //13
  
};

int mario_length = 187;


//Nokia ringtone
int nokia_melody[] = {
  NOTE_A5, NOTE_G5, NOTE_B4, NOTE_CS5, NOTE_FS5, NOTE_E5, NOTE_G4, NOTE_A4, NOTE_E5, NOTE_D5, NOTE_FS4, NOTE_A4, NOTE_D5, 0
};

int nokia_timing[] {
  150, 150, 300, 300, 150, 150, 300, 300, 150, 150, 300, 300, 600, 600
};

int nokia_length = 14;



//Sonic Green Hill Theme

  int sonic_intro_melody[] { //48
  //16
  NOTE_A6, NOTE_F5, NOTE_A6, NOTE_F5, NOTE_B6, NOTE_G5, NOTE_B6, NOTE_G5, //8
  NOTE_C6, NOTE_A6, NOTE_C6, NOTE_A6, NOTE_D6, NOTE_B6, NOTE_D6, NOTE_B6, //8

  //17
  NOTE_C5, 0, NOTE_A4, 0, NOTE_B4, //5
  0, NOTE_A4, 0, NOTE_B4, 0, NOTE_A4, 0, //7
  NOTE_C5, 0, NOTE_B4, 0, NOTE_A4, //5

  //15
  NOTE_A4, 0, NOTE_B4, 0, NOTE_C5, 0, //6
  NOTE_A4, 0, NOTE_B4, 0, NOTE_C5, 0, //6
  NOTE_C5, 0, NOTE_B4, //3
};

  int sonic_intro_timing[] {
  100, 100, 100, 100, 100, 100, 100, 100,
  100, 100, 100, 100, 100, 100, 100, 100,
  400, 200, 400, 200, 400,
  200, 400, 200, 200, 200, 200, 200,
  400, 200, 400, 200, 2000,
  400, 200, 400, 200, 200, 200,
  400, 200, 400, 200, 200, 200,
  400, 200, 2600
};

int sonic_melody[] = {
  //15
  NOTE_C5, NOTE_A4, NOTE_C5, //3
  NOTE_B4, NOTE_C5, NOTE_B4, NOTE_G4, //4
  NOTE_G4, NOTE_E5, NOTE_D5, NOTE_C5, //4
  NOTE_B4, NOTE_C5, NOTE_B4, NOTE_G4, //4

  //15
  NOTE_C5, NOTE_A4, NOTE_C5, //3
  NOTE_B4, NOTE_C5, NOTE_B4, NOTE_G4, //4
  NOTE_A4, NOTE_A4, NOTE_F4, NOTE_A4, //4
  NOTE_G4, NOTE_A4, NOTE_G4, NOTE_C4, //4

  //15
  NOTE_C5, NOTE_A4, NOTE_C5, //3
  NOTE_B4, NOTE_C5, NOTE_B4, NOTE_G4, //4
  NOTE_G4, NOTE_E5, NOTE_D5, NOTE_C5, //4
  NOTE_B4, NOTE_C5, NOTE_B4, NOTE_G4, //4

  //17
  NOTE_C5, NOTE_A4, NOTE_C5, //3
  NOTE_B4, NOTE_C5, NOTE_B4, NOTE_G4, //4
  NOTE_A4, NOTE_A4, NOTE_F4, NOTE_A4, //4
  NOTE_G4, NOTE_A4, NOTE_G4, NOTE_C4, NOTE_C4, NOTE_G4, //6

  //19
  NOTE_D4, NOTE_C4, NOTE_D4, NOTE_E4, NOTE_C4, NOTE_C4, NOTE_E4, NOTE_DS4, NOTE_C4, NOTE_DS4, NOTE_D4, //11
  NOTE_E4, NOTE_E4, NOTE_F4, NOTE_E4, NOTE_G4, NOTE_E4, NOTE_E4, NOTE_C4, //8
  
};

int sonic_timing[] {
  200, 400, 200,
  400, 200, 400, 800,
  200, 200, 400, 200,
  400, 200, 400, 1400,

  200, 400, 200,
  400, 200, 400, 800,
  200, 200, 400, 200,
  400, 200, 400, 1400,

  200, 400, 200,
  400, 200, 400, 800,
  200, 200, 400, 200,
  400, 200, 400, 1400,

  200, 400, 200,
  400, 200, 400, 800,
  200, 200, 400, 200,
  400, 200, 400, 200, 200, 200,
  2600, 200, 200, 2800, 200, 200, 200, 2600, 200, 200, 1600,
  400, 200, 200, 200, 200, 200, 200, 200, 
  
};

int sonic_length = 81;


int toxic_melody[] = {
  NOTE_C5, NOTE_C5, NOTE_E5, NOTE_D5, NOTE_C5, NOTE_D5, NOTE_E5, NOTE_E4, NOTE_D4, NOTE_C4, //10
  NOTE_FS6, NOTE_D6, NOTE_E6, NOTE_D6, NOTE_C6, //5
  NOTE_C5, NOTE_C5, NOTE_E5, NOTE_D5, NOTE_C5, NOTE_D5, NOTE_E5, NOTE_E4, NOTE_D4, NOTE_C4, //10
  NOTE_FS6, NOTE_D6, NOTE_E6, NOTE_D6, NOTE_C6, //5
  
  NOTE_E4, 0, NOTE_C5, NOTE_D5, NOTE_E5, NOTE_D5, NOTE_C5, //7
  NOTE_E4, 0, NOTE_C5, NOTE_E5, NOTE_C5, NOTE_E5, //6
  0, NOTE_C5, NOTE_E5, NOTE_D5, NOTE_C5, //5

  NOTE_C5, NOTE_C5, NOTE_C5, NOTE_E5, NOTE_C5, NOTE_E5, //6
  0, NOTE_B4, NOTE_D5, NOTE_C5, NOTE_B4, //5
  0, NOTE_G4, NOTE_C5, NOTE_G4, NOTE_B4 //5
  
  
};

int toxic_timing[] = {
  210, 210, 105, 105, 105, 105, 420, 105, 105, 210,
  420, 420, 210, 210, 420,
  210, 210, 105, 105, 105, 105, 420, 105, 105, 210,
  420, 420, 210, 210, 420,

  210, 210, 210, 210, 210, 210, 420,
  210, 420, 210, 210, 210, 840,
  210, 210, 210, 210, 420,

  210, 210, 210, 210, 210, 210, 820,
  210, 210, 210, 210, 420,
  660, 210, 210, 210, 420
};

int toxic_length = 64;


#define BUZZER_PIN 4
#define SEED_PIN 5 //(analog)

//button pins
#define RESET_BUTTON 5
#define MARIO_BUTTON 6
#define NOKIA_BUTTON 7
#define SONIC_BUTTON 8
#define TOXIC_BUTTON 9

//LED pins
#define MARIO_LED A0
#define NOKIA_LED A1
#define SONIC_LED A2
#define TOXIC_LED A3

void play_song(int melody[], int timing[], int length, int led) { //loops a song until stopped
  
  if(led == SONIC_LED) { //kludge to have an intro for the Sonic theme
    for(int i = 0; i < 48; i++) { //hardcoded intro length
      if(!digitalRead(RESET_BUTTON)) break; //stop playing song on reset
    
      if(sonic_intro_melody[i]) {
        int note_length = sonic_intro_timing[i]/2; //play note for half time
        tone(BUZZER_PIN, sonic_intro_melody[i], note_length); //gen square wave on speaker pin
        digitalWrite(led, HIGH); //light LED during note played
     }
    
     delay(sonic_intro_timing[i]/2);
     digitalWrite(led, LOW); //shut off LED in between notes
     delay(sonic_intro_timing[i]/2);
    }
  }
  
  while(true) {
    
    for(int i = 0; i < length; i++) {
      if(!digitalRead(RESET_BUTTON)) break; //stop playing song on reset
    
      if(melody[i]) {
        int note_length = timing[i]/2; //play note for half time
        tone(BUZZER_PIN, melody[i], note_length); //gen square wave on speaker pin
        digitalWrite(led, HIGH); //light LED during note played
     }
    
     delay(timing[i]/2);
     digitalWrite(led, LOW); //shut off LED in between notes
     delay(timing[i]/2);
    }
    if(!digitalRead(RESET_BUTTON)) break; //stop looping song on reset
  }
}

void setup() {
  //buttons
  pinMode(RESET_BUTTON, INPUT_PULLUP); 
  pinMode(MARIO_BUTTON, INPUT_PULLUP);
  pinMode(NOKIA_BUTTON, INPUT_PULLUP);
  pinMode(SONIC_BUTTON, INPUT_PULLUP);
  pinMode(TOXIC_BUTTON, INPUT_PULLUP);

  //leds
  pinMode(MARIO_LED, OUTPUT); 
  pinMode(NOKIA_LED, OUTPUT); 
  pinMode(SONIC_LED, OUTPUT); 
  pinMode(TOXIC_LED, OUTPUT);

  //generate random seed from SEED_PIN
  randomSeed(analogRead(SEED_PIN));

}



void loop() {
 
 //continuously check for a pressed button, and play a random song after 1 min if enabled (PLAY_RANDOM_SONGS)
 for(int i = 0; i < 6000; i++) {
    if(!digitalRead(MARIO_BUTTON)) {
      play_song(mario_melody, mario_timing, mario_length, MARIO_LED);
      i = 0;
    }
    if(!digitalRead(NOKIA_BUTTON)) {
      play_song(nokia_melody, nokia_timing, nokia_length, NOKIA_LED);
      i = 0;
    }
    if(!digitalRead(SONIC_BUTTON)) {
      play_song(sonic_melody, sonic_timing, sonic_length, SONIC_LED);
      i = 0;
    }
    if(!digitalRead(TOXIC_BUTTON)) {
      play_song(toxic_melody, toxic_timing, toxic_length, TOXIC_LED);
      i = 0;
    }
    delay(10);
  }
  if(PLAY_RANDOM_SONGS) {
    int song = random(0,3);
    switch(song) {
     case 0:
     play_song(mario_melody, mario_timing, mario_length, MARIO_LED);
     break;
    
     case 1:
     play_song(nokia_melody, nokia_timing, nokia_length, NOKIA_LED);
     break;
    
     case 2:
      play_song(sonic_melody, sonic_timing, sonic_length, SONIC_LED);
      break;
    
      case 3:
      play_song(toxic_melody, toxic_timing, toxic_length, TOXIC_LED);
      break;
    }
  }
}


