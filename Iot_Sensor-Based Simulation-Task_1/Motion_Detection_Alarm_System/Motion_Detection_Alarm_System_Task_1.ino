int pirPin = 4;
int ledPin = 5;
int buzzer = 6;
int dt=500;

void setup() {
  pinMode(pirPin, INPUT);
  pinMode(ledPin, OUTPUT);
  pinMode(buzzer, OUTPUT);

  Serial.begin(9600);
}

void loop() {

  int motion = digitalRead(pirPin);
  if (motion == HIGH) {
    digitalWrite(ledPin, HIGH);
    Serial.println("Motion Detected!");
    for(int freq = 700; freq <= 2000; freq += 5) {

    tone(buzzer, freq);
    delay(2);
}

for(int freq = 2000; freq >= 700; freq -= 5) {

    tone(buzzer, freq);
    delay(2);
}
  } 
  else{
    digitalWrite(ledPin, LOW);
    noTone(buzzer);
    Serial.println("No Motion");
  }
  delay(dt);
}