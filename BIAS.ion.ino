const int signal = 25;

void setup(){
  Serial.begin(115200);
  pinMode(signal, INPUT);
}

void loop(){
  int signalState = digitalRead(signal);
  if(signalState==HIGH){
    Serial.println("High voltage detected");
  }else{
    Serial.println("No High voltage detected(safe).");
  }
  delay(500);
}