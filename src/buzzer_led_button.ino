int button = 8;
int buzzer = 11;
int led = 4;

bool systemActive = true;
bool lastButtonState = LOW;

void setup() {
    pinMode(button, INPUT);
    pinMode(buzzer, OUTPUT);
    pinMode(led, OUTPUT);

    digitalWrite(buzzer, LOW);
    digitalWrite(led, LOW);
}

void loop() {
    bool currentButtonState = digitalRead(button);

    // Detect a rising edge to toggle system state
    if (currentButtonState == HIGH && lastButtonState == LOW) {
        delay(50); // Debounce
        if (digitalRead(button) == HIGH) {
            systemActive = !systemActive; // Toggle system ON/OFF
        }
    }

    lastButtonState = currentButtonState;

    if (systemActive) {
        // Blink LED and Buzzer ON and OFF
        digitalWrite(led, HIGH);
        digitalWrite(buzzer, HIGH);
        delay(1000);
        digitalWrite(led, LOW);
        digitalWrite(buzzer, LOW);
        delay(1000);
    } else {
        // Ensure both are OFF when system is deactivated
        digitalWrite(led, LOW);
        digitalWrite(buzzer, LOW);
    }
}