//gripper motor 1,2,3 initial setting
#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>

Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver();

void setup() {
  Serial.begin(9600);
  pwm.begin();
  pwm.setOscillatorFrequency(27000000);
  pwm.setPWMFreq(50);

  delay(1000);
}

void loop() {
  int pulse_wide, pulse_width;
  pulse_wide = map(440, 0, 1000, 650,2350);
  pulse_width = int(float(pulse_wide) / 1000000 * 50 * 4096);
  pwm.setPWM(2, 0, pulse_width);


  while(Serial.available()){
    pulse_wide = map(650, 0, 1000, 650,2350);
    pulse_width = int(float(pulse_wide) / 1000000 * 50 * 4096);
    pwm.setPWM(2, 0, pulse_width);
  }
}
