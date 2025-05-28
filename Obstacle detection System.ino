#define TRIG_PIN D6
#define ECHO_PIN D5
#define LED_PIN D2
#define BUZZER_PIN D8

long duration;
int distance;

void setup()
 {
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);
  pinMode(BUZZER_PIN, OUTPUT);
  Serial.begin(9600);
}
 

void loop() 
{
  // Trigger ultrasonic pulse
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);

  // Read echo duration
  duration = pulseIn(ECHO_PIN, HIGH);
  distance = duration * 0.034 / 2;

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  // Behavior based on distance
  if (distance <= 10) {
    // Very close: solid LED + continuous beep
    digitalWrite(LED_PIN, HIGH);
    tone(BUZZER_PIN,1000);
  } 
  else if (distance > 10 && distance <= 25) {
    // Close: fast blinking and fast beeping
    digitalWrite(LED_PIN, HIGH);
    tone(BUZZER_PIN,1000);
    delay(100);
    digitalWrite(LED_PIN, LOW);
    noTone(BUZZER_PIN);
    delay(100);
  } 
  else if (distance > 25 && distance <= 50) {
    // Medium: slower blinking and beeping
    digitalWrite(LED_PIN, HIGH);
    tone(BUZZER_PIN,1000);
    delay(300);
    digitalWrite(LED_PIN, LOW);
    noTone(BUZZER_PIN);
    delay(300);
  }

   else if (distance > 50 && distance <= 100) 
   {
    // Medium: slower blinking and beeping
    digitalWrite(LED_PIN, HIGH);
    tone(BUZZER_PIN,1000);
    delay(500);
    digitalWrite(LED_PIN, LOW);
    noTone(BUZZER_PIN);
    delay(500);
   }

    else if (distance > 100 && distance <= 150) 
   {
    // Medium: slower blinking and beeping
    digitalWrite(LED_PIN, HIGH);
    tone(BUZZER_PIN,1000);
    delay(1000);
    digitalWrite(LED_PIN, LOW);
    noTone(BUZZER_PIN);
    delay(1000);
   }

  else {
    // Far: very slow blink, no beep
    noTone(BUZZER_PIN); 
    digitalWrite(LED_PIN, LOW);
    delay(500);
  }
}
