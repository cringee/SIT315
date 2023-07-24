//instalise varliable
const int photoresistorPin = A0;
const int ledPin = 7;
const int threshold = 500; 

void setup() {
  // SENSE
  pinMode(ledPin, OUTPUT);
  pinMode(photoresistorPin, INPUT);
  digitalWrite(ledPin, LOW); 
  Serial.begin(9600); 
}

void loop() {
  int lightValue = analogRead(photoresistorPin);
  Serial.print("Light Value: ");
  Serial.println(lightValue); 
  
  // THINK
  if (lightValue > threshold) {
    Serial.print("let there be light");
    
    //ACT
    digitalWrite(ledPin, HIGH); 
  } else {
    digitalWrite(ledPin, LOW); 
  
  delay(100); 
