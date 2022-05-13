
int R1 = A0;
int LEDr = 11;
int LEDb = 10;
int LEDg = 9;

int Sensor ;


void setup() {
  // put your setup code here, to run once:


  pinMode(R1 , INPUT);
  pinMode(LEDr, OUTPUT);
  pinMode(LEDb, OUTPUT);
  pinMode(LEDg, OUTPUT);
  Sensor= 0;
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:


  Sensor  = analogRead(R1);
  analogWrite(LEDr , Sensor/4);
   analogWrite(LEDb , 255-Sensor/4);
 analogWrite(LEDg , 0);

 delay(Sensor);

  Serial.println(Sensor);

  analogWrite(LEDr , 0);
   analogWrite(LEDb , 0);
 analogWrite(LEDg , 0);

 delay(Sensor);

}
