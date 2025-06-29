const int BUT1 = D0;
const int BUT2 = D1;
const int BUT3 = D2;
const int BUT4 = D3;

const int LED1 = D4;
const int LED2 = D5;
const int LED3 = D6;
const int LED4 = D7;

bool keyStates[4] = { false, false, false, false };
unsigned long led1OffTime = 0;
unsigned long led2OffTime = 0;
unsigned long led3OffTime = 0;

void setup() {
  pinMode(BUT1, INPUT);
  pinMode(BUT2, INPUT);
  pinMode(BUT3, INPUT);
  pinMode(BUT4, INPUT);

  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
}

void loop() {
  unsigned long now = millis();

// Dot .
  if (digitalRead(BUT1) == HIGH) {
    led1OffTime = now + 250;
  }
  if (now < led1OffTime) {
    digitalWrite(LED1, HIGH);
  } else {
    digitalWrite(LED1, LOW);
  }

// Dash -
  if (digitalRead(BUT2) == HIGH) {
    led2OffTime = now + 1000;
  }
  if (now < led2OffTime) {
    digitalWrite(LED2, HIGH);
  } else {
    digitalWrite(LED2, LOW);
  }

// Space _
  if (digitalRead(BUT3) == HIGH) {
    led3OffTime = now + 2000;
  }
  if (now < led3OffTime) {
    digitalWrite(LED1, HIGH);
    digitalWrite(LED2, HIGH);
    digitalWrite(LED3, HIGH);
    digitalWrite(LED4, HIGH);
  } else {
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, LOW);
    digitalWrite(LED3, LOW);
    digitalWrite(LED4, LOW);
  }

// Clear screen
  if (digitalRead(BUT4) == HIGH) {
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, LOW);
    digitalWrite(LED3, LOW);
    digitalWrite(LED4, LOW);
  } else {
    digitalWrite(LED4, LOW);
  }
}
