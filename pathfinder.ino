const int BUT1 = D0;
const int BUT2 = D1;
const int BUT3 = D2;
const int BUT4 = D3;

const int LED1 = D4;
const int LED2 = D5;
const int LED3 = D6;
const int LED4 = D7;

void setup() {

    pinMode(BUT1, INPUT);
    pinMode(BUT2, INPUT);
    pinMode(BUT3, INPUT);
    pinMode(BUT4, INPUT);

    pinMode(LED1, OUTPUT);
    pinMode(LED2, OUTPUT);
    pinMode(LED3, OUTPUT);
    pinMode(LED4, OUTPUT);

long startTime = millis();
}

void loop() {
    long but1time;
    long but2time;
    long but3time;
    long but4time;
}

if (digitalRead(BUT1) == HIGH) {
but1time = millis(); digitalWrite(LED1, HIGH);
} else {
digitalWrite(LED1, LOW);
}

if (digitalRead(BUT2) == HIGH) {
but2time = millis(); digitalWrite(LED2, HIGH);
} else {
digitalWrite(LED2, LOW);
}

if (digitalRead(BUT3) == HIGH) {
but3time = millis(); digitalWrite(LED3, HIGH);
} else {
digitalWrite(LED3, LOW);
}

if (digitalRead(BUT4) == HIGH) {
but4time = millis(); digitalWrite(LED4, HIGH);
} else {
digitalWrite(LED4, LOW);
}
