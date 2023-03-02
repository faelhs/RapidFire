int SYNC = 2;
int RT = A3;
bool active = false;
bool oldOn = false;

void setup() {
  pinMode(SYNC, INPUT);
}


void loop() {
  if (digitalRead(SYNC) == LOW) {
    if (oldOn == false) {
      if (active == false) {
        active = true;
      } else {
        active = false;
        for (int i = 0; i < 3; i++) {
        }
      }
      oldOn = true;
      delay(500);
    }
  } else {
    oldOn = false;
  }


  pinMode(RT, INPUT);
  int sig = analogRead(RT);

  if (active == true) {
    pinMode(RT, OUTPUT);
    analogWrite(RT, 1000);
    delay(22);
    pinMode(RT, INPUT);
    delay(100);
  }



  if (active == true) {
    int chicken = 4;
  }


  else if (active == false) {
    pinMode(RT, INPUT);
  } else if (sig > 150 || sig == 0 && active == false) {
    pinMode(RT, INPUT);
  }
}
