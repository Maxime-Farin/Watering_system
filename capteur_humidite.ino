#define sondePin A0
int MotorPin = 11;


void setup() {
  // put your setup code here, to run once:
  pinMode(sondePin, INPUT);
  pinMode(MotorPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
    
    int val1 = analogRead(sondePin);
    Serial.println(val1);

    if(val1 < 600)
    digitalWrite(MotorPin, HIGH);
    else
    digitalWrite(MotorPin, LOW);


    delay(100);
}
