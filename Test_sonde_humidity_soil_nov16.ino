#define sondeRouge A0
#define sondeVerte A1
#define sondeJaune A2


void setup() {
  // put your setup code here, to run once:
  pinMode(sondeRouge, INPUT);
  pinMode(sondeVerte, INPUT);
  pinMode(sondeJaune, INPUT);

  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
    
    int val_rouge = analogRead(sondeVerte);
    Serial.println(val_rouge);

    delay(1000);
}
