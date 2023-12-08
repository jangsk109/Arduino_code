//body motor 4,5,6 initial setting
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

  pulse_wide = map(460, 0, 1000, 650,2350);
  pulse_width = int(float(pulse_wide) / 1000000 * 50 * 4096);
  pwm.setPWM(6, 0, pulse_width);

  // pulse_wide = map(600, 0, 1000, 650,2350);
  // pulse_width = int(float(pulse_wide) / 1000000 * 50 * 4096);
  // pwm.setPWM(4, 0, pulse_width);

  while(Serial.available()==0){
    pulse_wide = map(1000, 0, 1000, 650,2350);
    pulse_width = int(float(pulse_wide) / 1000000 * 50 * 4096);
    pwm.setPWM(6, 0, pulse_width);
  }
}
