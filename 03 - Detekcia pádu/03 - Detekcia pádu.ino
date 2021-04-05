#include <MPU6050_tockn.h>

#define BUZZER_PIN 4
#define BUTTON_PIN 3
#define DEVICE_DEBUG 1
#define LED_PIN 13

MPU6050 mpu6050(Wire);
volatile byte state = LOW;

void setup() {
  #if DEVICE_DEBUG
    // UART init
    Serial.begin(9600);
  #endif

  // I2C init
  Wire.begin();

  pinMode(BUZZER_PIN, OUTPUT);
  pinMode(BUTTON_PIN, OUTPUT);
  pinMode(BUTTON_PIN, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(BUTTON_PIN), button_state, CHANGE);
  
  mpu6050.begin();
  mpu6050.calcGyroOffsets(true);
}

void loop() {
  digitalWrite(LED_PIN, state);
  mpu6050.update();  
}

void button_state () {
  state = !state;
}