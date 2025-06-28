#include <Keyboard.h>

const int BUT1 = D0;
const int BUT2 = D1;
const int BUT3 = D2;
const int BUT4 = D3;

const int LED1 = D4;
const int LED2 = D5;
const int LED3 = D6;
const int LED4 = D7;

const char KEY1 = 'd';
const char KEY2 = 'f';
const char KEY3 = 'j';
const char KEY4 = 'k';

bool keyStates[4] = { false, false, false, false };

void setup() {
  pinMode(BUT1, INPUT_PULLUP);
  pinMode(BUT2, INPUT_PULLUP);
  pinMode(BUT3, INPUT_PULLUP);
  pinMode(BUT4, INPUT_PULLUP);

  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);

  Keyboard.begin();
}

void loop() {
  handleButton(BUT1, LED1, KEY1, 0);
  handleButton(BUT2, LED2, KEY2, 1);
  handleButton(BUT3, LED3, KEY3, 2);
  handleButton(BUT4, LED4, KEY4, 3);
}

void handleButton(int buttonPin, int ledPin, char keyChar, int index) {
  if (digitalRead(buttonPin) == LOW) {
    digitalWrite(ledPin, HIGH);
    if (!keyStates[index]) {
      Keyboard.press(keyChar);
      keyStates[index] = true;
    }
  } else {
    digitalWrite(ledPin, LOW);
    if (keyStates[index]) {
      Keyboard.release(keyChar);
      keyStates[index] = false;
    }
  }
}
