const int potPin = 4;

void setup() {
  Serial.begin(115200); 
  // Capital 'S' in Serial, and begin() with a lowercase b
}

void loop() {
  int potValue = analogRead(potPin);

  Serial.print("Potentiometer Value: ");
  Serial.println(potValue);  // Use println() not print1n()
  
  delay(200);
}

