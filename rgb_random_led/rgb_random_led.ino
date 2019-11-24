int redPin= 13;
int greenPin = 12;
int bluePin = 11;
int r1,r2,r3;

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}
void loop() {
  
  r1=random(10,255);
  r2=random(10,255);
  r3=random(10,255);
  setColor(r1, r2, r3); delay(1000);
}
void setColor(int redValue, int greenValue, int blueValue) {
  analogWrite(redPin, redValue);
  analogWrite(greenPin, greenValue);
  analogWrite(bluePin, blueValue);
}
