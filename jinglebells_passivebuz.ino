#define BUZZER 8

// Notes (Hz)
#define C4  262
#define D4  294
#define E4  330
#define F4  349
#define G4  392
#define A4  440
#define B4  494
#define C5  523

int melody[] = {
  // Jingle bells, jingle bells
  E4, E4, E4,
  E4, E4, E4,
  // Jingle all the way
  E4, G4, C4, D4, E4,
  // Oh what fun it is to ride
  F4, F4, F4, F4,
  F4, E4, E4,
  // In a one-horse open sleigh
  E4, D4, D4, E4, D4, G4,
  // Jingle bells, jingle bells
  E4, E4, E4,
  E4, E4, E4,
  // Jingle all the way
  E4, G4, C4, D4, E4,
  // Oh what fun it is to ride
  F4, F4, F4, F4,
  F4, E4, E4,
  // In a one-horse open sleigh
  G4, G4, F4, D4, C4
};

// Note durations (bigger = slower)
int duration[] = {
  // jingle bells
  4, 4, 2,
  4, 4, 2,
  // jingle all the way
  4, 4, 4, 4, 2,
  // oh what fun it is to ride
  4, 4, 4, 4,
  4, 4, 2,
  // one-horse open sleigh
  4, 4, 4, 4, 2, 2,
  // repeat
  4, 4, 2,
  4, 4, 2,
  4, 4, 4, 4, 2,
  4, 4, 4, 4,
  4, 4, 2,
  // ending
  4, 4, 4, 4, 1
};

void playSong() {
  int notes = sizeof(melody) / sizeof(melody[0]);

  for (int i = 0; i < notes; i++) {
    int noteTime = 1200 / duration[i];  // slower tempo
    tone(BUZZER, melody[i], noteTime);
    delay(noteTime * 1.4);               // spacing between notes
    noTone(BUZZER);
  }
}

void setup() {
  playSong();
}

void loop() {
  // Uncomment to repeat forever
  // playSong();
  // delay(2000);
}