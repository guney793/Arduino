int a_0;
int a_1;
int sw;
void setup() {
  // put your setup code here, to run once:
  pinMode(13, INPUT);
  
  Serial.begin(9600);
}

void loop() {

  
  a_0 = analogRead(A0);
  a_1 = analogRead(A1);
  sw = digitalRead(13);

  Serial.print(sw);
  Serial.print(" | ");
  Serial.print(a_0);
  Serial.print(" | ");
  Serial.print(a_1);
  Serial.println("");

  delay(200);

}
