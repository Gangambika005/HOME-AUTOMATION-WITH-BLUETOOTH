# HOME-AUTOMATION-WITH-BLUETOOTH

"COMPANY" : CODTECH IT SOLUTIONS

"NAME" : GANGAMBIKA BK

"INTERN ID" : CT08VCR

"DOMAIN" : EMBEDDED SYSTEMS

"DURATION" : 4 WEEKS

"MENTOR" : NEELA SANTHOSH

"DISCRIPTION" : 
Introduction
Task 2 focuses on designing a basic home automation system where devices (represented by LEDs) are controlled via serial commands using an Arduino UNO. Although a Bluetooth module like HC-05 is used in real-world scenarios, this task simulates Bluetooth communication using the Serial Monitor in the Arduino IDE or Tinkercad. This approach simplifies development while still demonstrating core embedded system concepts such as digital output control, serial communication, and multi-device automation.

Tools and Components Used :
Arduino UNO R3: The microcontroller used to process commands and control outputs.
LEDs (Red, Blue, Green): Simulate home appliances like lights or fans.
Resistors (220Ω): Protect LEDs from excess current.
Jumper Wires & Breadboard: Used for circuit connections.
Serial Monitor / Bluetooth App: For sending control commands.
Arduino IDE / Tinkercad Circuits: Development and simulation environments.
Working Principle :
The system receives input from the Serial Monitor, which simulates commands that would typically be sent from a Bluetooth-enabled mobile app. Each number from ‘1’ to ‘8’ triggers a specific action:

Input	Action
‘1’	Turns ON Red LED
‘2’	Turns OFF Red LED
‘3’	Turns ON Blue LED
‘4’	Turns OFF Blue LED
‘5’	Turns ON Green LED
‘6’	Turns OFF Green LED
‘7’	Turns ON all LEDs
‘8’	Turns OFF all LEDs
The code uses Serial.read() to check for available characters in the serial buffer. When a valid command is received, the corresponding digital output pin is set to HIGH or LOW to control the connected LED. Additionally, status messages are printed to the Serial Monitor for feedback, which is useful during testing or debugging.

Code Overview
cpp
Copy
Edit
int val = 0;

void setup() {
  pinMode(2, OUTPUT); // Red LED
  pinMode(3, OUTPUT); // Blue LED
  pinMode(4, OUTPUT); // Green LED
  Serial.begin(9600);
}

void loop() {
  val = Serial.read();
  
  if (val == '1') { digitalWrite(2, HIGH); Serial.println("RED LED IS ON"); }
  if (val == '2') { digitalWrite(2, LOW); Serial.println("RED LED IS OFF"); }
  if (val == '3') { digitalWrite(3, HIGH); Serial.println("BLUE LED IS ON"); }
  if (val == '4') { digitalWrite(3, LOW); Serial.println("BLUE LED IS OFF"); }
  if (val == '5') { digitalWrite(4, HIGH); Serial.println("GREEN LED IS ON"); }
  if (val == '6') { digitalWrite(4, LOW); Serial.println("GREEN LED IS OFF"); }
  if (val == '7') {
    digitalWrite(2, HIGH); digitalWrite(3, HIGH); digitalWrite(4, HIGH);
    Serial.println("ALL LEDS ARE ON");
  }
  if (val == '8') {
    digitalWrite(2, LOW); digitalWrite(3, LOW); digitalWrite(4, LOW);
    Serial.println("ALL LEDS ARE OFF");
  }
}
This design is modular and scalable — you can add more devices or functions by expanding the if conditions with new input cases.

Simulating Bluetooth Control :
In a real setup, the serial input would come from a Bluetooth module (HC-05) connected to the Arduino, paired with a mobile device. Using an app like Serial Bluetooth Terminal, the same commands ('1' to '8') can be sent over Bluetooth, achieving wireless control of devices.

Real-World Applications :
This project simulates basic home automation and is applicable in several scenarios:

Smart Lighting Systems: Turn individual or all lights ON/OFF via smartphone.
Fan or Appliance Control: Similar setup can be used to control fans, ACs, or kitchen devices.
IoT Home Projects: Forms the base for WiFi/Bluetooth-based smart homes.
Security Lighting Systems: Control lighting based on user command or schedules.
Energy Saving Systems: Automate ON/OFF schedules to save power.
Conclusion :
Task 2 demonstrates how to use Arduino UNO and serial communication to control multiple devices via user commands. Even though a Bluetooth module was not used in simulation, the logic is identical to how a real system would operate when paired with a Bluetooth device. The project improves understanding of multi-device control, command parsing, and interactive embedded design — all crucial concepts in modern IoT and home automation systems.

"OUTPUT" :


