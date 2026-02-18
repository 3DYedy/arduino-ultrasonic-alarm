#include <LiquidCrystal.h>

#define trigPin 6  
#define echoPin 5
#define buzzer 2
#define ledRed 3
#define ledGreen 4

LiquidCrystal lcd(7, 8, 9, 10, 11, 12);

void setup() {
  Serial.begin(9600); 
  pinMode(trigPin, OUTPUT); 
  pinMode(echoPin, INPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(ledRed, OUTPUT);
  pinMode(ledGreen, OUTPUT);
  
  lcd.begin(16, 2);
  lcd.print("Sistem Alarm");
  delay(1000);
  lcd.clear();
}

void loop() {
  long duration;
  int distance;
  int pulseDelay; 

  digitalWrite(trigPin, LOW);        
  delayMicroseconds(2);               
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);            
  digitalWrite(trigPin, LOW);
  
  duration = pulseIn(echoPin, HIGH, 30000);
  distance = (duration / 2) / 29.1;

  lcd.setCursor(0, 0);
  lcd.print("Dist: ");
  lcd.print(distance);
  lcd.print(" cm    "); 

  Serial.print("Distanta: ");
  Serial.print(distance);
  Serial.println(" cm");
  
  if (distance < 50) {
    pulseDelay = (distance * 3) + 30;

    digitalWrite(buzzer, HIGH);
    digitalWrite(ledRed, HIGH);
    digitalWrite(ledGreen, LOW);
    
    delay(pulseDelay); 
    
    digitalWrite(buzzer, LOW);
    digitalWrite(ledRed, LOW);

  } 
  else {
    digitalWrite(buzzer, LOW);
    digitalWrite(ledRed, LOW);
    digitalWrite(ledGreen, HIGH);
  
  }
  
  delay(100);
}
