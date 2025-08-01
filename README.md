# Mini Arduino Experiment: Buzzer + LED + Button

This is a simple Arduino project demonstrating how to control an LED and buzzer with a button.

## Components

- 1 x Arduino Uno
- 1 x LED
- 1 x Buzzer (Active or Passive)
- 1 x Pushbutton
- 2 x 220Ω resistor (for LED)
- Jumper wires and breadboard

## How It Works

- The button is connected using `INPUT_PULLUP` (no need for external resistor).
- When the button is pressed:
  - The LED turns ON
  - The buzzer makes a short sound (200 ms)
- When not pressed:
  - Both LED and buzzer are OFF

## Folder Structure

Buzzer-LED-Button-Experiment/
├── README.md
├── images/
│ └── 1.png
│ └── 2.png
│ └── 3.png
├── src/
│ └── buzzer_led_button.ino

## License
MIT License

## Author
Catherine Bugarin
