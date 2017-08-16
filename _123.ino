#include <BlynkSimpleEsp8266.h>
void setup() {
  pinMode(BUILTIN_LED, OUTPUT);  // initialize onboard LED as output
  Serial.begin(9600);
  Serial.println("DHTxx test!");
  pinMode(D2, OUTPUT);
  //master
}
int v;
 
void loop() {
 // Serial.println("HI");
  digitalWrite(D2,HIGH);
  v= digitalRead(D1);
  Serial.println(v);
  digitalWrite(0, HIGH);  // turn on LED with voltage HIGH
  //delay(1000);  // wait one second
 // digitalWrite(D2,LOW);
  digitalWrite(2, LOW);   // turn off LED with voltage LOW
  //delay(1000);                      // wait one second
}
