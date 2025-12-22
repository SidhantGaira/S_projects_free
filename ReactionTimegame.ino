int rled = 13;
int yled = 12;
int gled = 11;
int b1 = 10;
int b2 = 9;
int buz = 8;
int but1 = 4;
int but2 = 2;

bool butpressed = 0;

void setup() {
  pinMode(b1, OUTPUT);
  pinMode(b2, OUTPUT);
  pinMode(rled, OUTPUT);
  pinMode(yled, OUTPUT);
  pinMode(gled, OUTPUT);

  pinMode(buz, OUTPUT);

  pinMode(but1, INPUT_PULLUP);
  pinMode(but2, INPUT_PULLUP);

  randomSeed(analogRead(A0));
}

void loop() {
  digitalWrite(gled, HIGH);
  digitalWrite(buz,HIGH);
  delay(100);
  digitalWrite(buz,LOW);
  delay(900);
  digitalWrite(gled, LOW);

  digitalWrite(yled, HIGH);
  digitalWrite(buz,HIGH);
  delay(100);
  digitalWrite(buz,LOW);
  delay(900);
  digitalWrite(yled, LOW);

  digitalWrite(rled, HIGH);
  digitalWrite(buz,HIGH);
  delay(100);
  digitalWrite(buz,LOW);
  delay(random(900,4901));
  digitalWrite(rled, LOW);

  while(butpressed==0){
    digitalWrite(b1,HIGH);
    digitalWrite(b2,HIGH);

    if((digitalRead(but1)==0)){
      butpressed = 1;
      digitalWrite(b2,LOW);
    } else if((digitalRead(but2)==0)){
      butpressed = 1;
      digitalWrite(b1,LOW);
    }
  }
  digitalWrite(buz,HIGH);
  delay(500);
  digitalWrite(buz,LOW);
  digitalWrite(b1,LOW);
  delay(1500);
  digitalWrite(b2,LOW);
  butpressed=0;
}