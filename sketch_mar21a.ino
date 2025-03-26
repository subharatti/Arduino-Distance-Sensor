const int trigPin = 9;
const int echoPin = 10;
const int vibration = 11;
const int switchPin = 7;
const int redLED = 5;
const int greenLED = 6;

void setup() {
    pinMode(trigPin, OUTPUT);
    pinMode(echoPin, INPUT);
  	pinMode(vibration, OUTPUT);
  	pinMode(switchPin, INPUT);
}


float getDistance() {
    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);
    long duration = pulseIn(echoPin, HIGH);
    return duration * 0.034 / 2; // cm
}

void loop() {
    if (digitalRead(switchPin) == HIGH) {  // Corrected the condition
        float distance = getDistance();
        Serial.print("Distance: ");
        Serial.print(distance);
        Serial.println(" cm");

        if (distance < 60) {
            digitalWrite(redLED, HIGH);
            digitalWrite(vibration, HIGH);
            digitalWrite(greenLED, LOW);
        } else {
          digitalWrite(greenLED, HIGH);
          digitalWrite(redLED, LOW);
          digitalWrite(vibration, LOW);
        }
    } else {
        digitalWrite(redLED, LOW);
        digitalWrite(greenLED, LOW);
        digitalWrite(vibration, LOW);      
    }
}
