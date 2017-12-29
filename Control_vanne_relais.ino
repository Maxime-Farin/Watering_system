const byte VANNE_PIN = 12;  // Broche LED


void setup() {
  // put your setup code here, to run once:
    
  /* Initialise le port série */
  Serial.begin(115200);
   
  pinMode(VANNE_PIN, OUTPUT);
  digitalWrite(VANNE_PIN, LOW);

}

void loop() {
  // put your main code here, to run repeatedly:
      digitalWrite(VANNE_PIN, HIGH);
      Serial.println(F("Vanne Ouverte"));
      delay(5000);
      digitalWrite(VANNE_PIN, LOW);
      Serial.println(F("Vanne Fermée"));

      delay(5000);
      
}
