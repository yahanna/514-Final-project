#include <Arduino.h>

// Define the pin array, using A0, A1, ... to represent analog input pins
int fsrPins[] = {A0, A1, A2, A3, A4, A5, A8, A9};
int fsrReading[8]; // Update array size to 8, because you have 8 FSRs
int buzzerPin = D2; // Assume the buzzer is connected to pin D2

// Define a tone frequency for each FSR
int tones[] = {262, 294, 330, 349, 392, 440, 494, 523}; // Frequencies for musical notes C4, D4, E4, F4, G4, A4, B4, C5

void setup() {
  Serial.begin(9600);
  pinMode(buzzerPin, OUTPUT); // Set the buzzer pin as output mode
}

void loop() {
  for (int i = 0; i < 8; i++) { // Update loop condition to 8 because you have 8 FSRs
    fsrReading[i] = analogRead(fsrPins[i]);
    Serial.print("FSR ");
    Serial.print(i + 1);
    Serial.print(": ");
    Serial.println(fsrReading[i]);

    // If the FSR reading exceeds a certain threshold, play the corresponding tone
    if (fsrReading[i] > 100) { // Assuming a threshold of 100, you can adjust this value as needed
      tone(buzzerPin, tones[i], 100); // Play the tone on the buzzer, duration 100 milliseconds
      delay(150); // Delay some time before reading the next FSR to avoid overlapping sounds
    }
  }
  Serial.println("-------");
  delay(850); // Adjust delay to accommodate sound playback
}
