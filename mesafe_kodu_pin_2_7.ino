int a_0 ;
int a_1 ;
void setup (){
  pinMode (8,INPUT);
  Serial.begin(9600) ;
  
}
void loop() {
  a_0 = analogRead (A0);
  a_1 = analogRead (A1) ;
  Serial.print("x değeri = " );
  Serial.print(a_0) ;
  Serial.print(" ||");
  Serial.print ("y değeri = " ) ;
  Serial.print (a_1 );
  Serial.print(" ||");
  Serial.print ( 8 ) ;
  Serial.println (" ") ;
  delay(1000) ;
 
}
