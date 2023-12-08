//gripper grab initial setting
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

void stop(double pinnum, double time) {
  double pulse_wide, pulse_width;
  pulse_wide = map(450, 0, 1000, 650,2350);
  pulse_width = double(float(pulse_wide) / 1000000 * 50 * 4096);
  pwm.setPWM(pinnum, 0, pulse_width);
  delay(time);
}

void stop2(double pinnum, double time) {
  double pulse_wide, pulse_width;
  pulse_wide = map(450, 0, 1000, 650,2350);
  pulse_width = double(float(pulse_wide) / 1000000 * 50 * 4096);
  pwm.setPWM(pinnum, 0, pulse_width);
  delay(time);
}

void grab1(){
    for(double i=440;i>=220;i=i-11){
    double pulse_wide, pulse_width;
    pulse_wide = map(i, 0, 1000, 650,2350);
    pulse_width = double(float(pulse_wide) / 1000000 * 50 * 4096);
    pwm.setPWM(1, 0, pulse_width);
    delay(50);
    }
    delay(6300);

  for(double i=220;i<=440;i=i+11){
    double pulse_wide, pulse_width;
    pulse_wide = map(i, 0, 1000, 650,2350);
    pulse_width = double(float(pulse_wide) / 1000000 * 50 * 4096);
    pwm.setPWM(1, 0, pulse_width);
    delay(50);
    }
}

void letgo1(){
  for(double i=460;i<=730;i=i+13.5){
    double pulse_wide, pulse_width;
    pulse_wide = map(i, 0, 1000, 650,2350);
    pulse_width = double(float(pulse_wide) / 1000000 * 50 * 4096);
    pwm.setPWM(1, 0, pulse_width);
    delay(50);
  }
  delay(6300);

  for(double i=730;i>=460;i=i-13.5){
    double pulse_wide, pulse_width;
    pulse_wide = map(i, 0, 1000, 650,2350);
    pulse_width = double(float(pulse_wide) / 1000000 * 50 * 4096);
    pwm.setPWM(1, 0, pulse_width);
    delay(50);
    }
}

void grab2(){
  for(double i=450;i<=880;i=i+21.5){
    double pulse_wide, pulse_width;
    pulse_wide = map(i, 0, 1000, 650,2350);
    pulse_width = double(float(pulse_wide) / 1000000 * 50 * 4096);
    pwm.setPWM(2, 0, pulse_width);
    delay(50);
  }
  delay(6100);

  for(double i=880;i>=450;i=i-21.5){
    double pulse_wide, pulse_width;
    pulse_wide = map(i, 0, 1000, 650,2350);
    pulse_width = double(float(pulse_wide) / 1000000 * 50 * 4096);
    pwm.setPWM(2, 0, pulse_width);
    delay(50);
    }
}

void letgo2(){
    for(double i=440;i>=10;i=i-21.5){
    double pulse_wide, pulse_width;
    pulse_wide = map(i, 0, 1000, 650,2350);
    pulse_width = double(float(pulse_wide) / 1000000 * 50 * 4096);
    pwm.setPWM(2, 0, pulse_width);
    delay(50);
    }
    delay(6050);

  for(double i=10;i<=440;i=i+21.5){
    double pulse_wide, pulse_width;
    pulse_wide = map(i, 0, 1000, 650,2350);
    pulse_width = double(float(pulse_wide) / 1000000 * 50 * 4096);
    pwm.setPWM(2, 0, pulse_width);
    delay(50);
    }
}

void grab3(){
    for(double i=440;i>=60;i=i-19){
    double pulse_wide, pulse_width;
    pulse_wide = map(i, 0, 1000, 650,2350);
    pulse_width = double(float(pulse_wide) / 1000000 * 50 * 4096);
    pwm.setPWM(3, 0, pulse_width);
    delay(50);
    }
    delay(5500);

  for(double i=60;i<=440;i=i+19){
    double pulse_wide, pulse_width;
    pulse_wide = map(i, 0, 1000, 650,2350);
    pulse_width = double(float(pulse_wide) / 1000000 * 50 * 4096);
    pwm.setPWM(3, 0, pulse_width);
    delay(50);
    }
}

void letgo3(){
  for(double i=460;i<=1000;i=i+27){
    double pulse_wide, pulse_width;
    pulse_wide = map(i, 0, 1000, 650,2350);
    pulse_width = double(float(pulse_wide) / 1000000 * 50 * 4096);
    pwm.setPWM(3, 0, pulse_width);
    delay(50);
  }
  delay(5500);

  for(double i=1000;i>=460;i=i-27){
    double pulse_wide, pulse_width;
    pulse_wide = map(i, 0, 1000, 650,2350);
    pulse_width = double(float(pulse_wide) / 1000000 * 50 * 4096);
    pwm.setPWM(3, 0, pulse_width);
    delay(50);
    }
}

void for4(double time){
  for(double i=440;i>=220;i=i-11){
    double pulse_wide, pulse_width;
    pulse_wide = map(i, 0, 1000, 650,2350);
    pulse_width = double(float(pulse_wide) / 1000000 * 50 * 4096);
    pwm.setPWM(4, 0, pulse_width);
    delay(50);
    }
    delay(time);

  for(double i=220;i<=440;i=i+11){
    double pulse_wide, pulse_width;
    pulse_wide = map(i, 0, 1000, 650,2350);
    pulse_width = double(float(pulse_wide) / 1000000 * 50 * 4096);
    pwm.setPWM(4, 0, pulse_width);
    delay(50);
    }
}

void back4(double time){
  for(double i=460;i<=743;i=i+14.15){
    double pulse_wide, pulse_width;
    pulse_wide = map(i, 0, 1000, 650,2350);
    pulse_width = double(float(pulse_wide) / 1000000 * 50 * 4096);
    pwm.setPWM(4, 0, pulse_width);
    delay(50);
  }
  delay(time);

  for(double i=743;i>=460;i=i-14.15){
    double pulse_wide, pulse_width;
    pulse_wide = map(i, 0, 1000, 650,2350);
    pulse_width = double(float(pulse_wide) / 1000000 * 50 * 4096);
    pwm.setPWM(4, 0, pulse_width);
    delay(50);
    }
}

void for5(double time){
  for(double i=460;i<=743;i=i+14.15){
    double pulse_wide, pulse_width;
    pulse_wide = map(i, 0, 1000, 650,2350);
    pulse_width = double(float(pulse_wide) / 1000000 * 50 * 4096);
    pwm.setPWM(5, 0, pulse_width);
    delay(50);
  }
  delay(time);

  for(double i=743;i>=460;i=i-14.15){
    double pulse_wide, pulse_width;
    pulse_wide = map(i, 0, 1000, 650,2350);
    pulse_width = double(float(pulse_wide) / 1000000 * 50 * 4096);
    pwm.setPWM(5, 0, pulse_width);
    delay(50);
    }
}

void back5(double time){
    for(double i=440;i>=220;i=i-11){
    double pulse_wide, pulse_width;
    pulse_wide = map(i, 0, 1000, 650,2350);
    pulse_width = double(float(pulse_wide) / 1000000 * 50 * 4096);
    pwm.setPWM(5, 0, pulse_width);
    delay(50);
    }
    delay(time);

  for(double i=220;i<=440;i=i+11){
    double pulse_wide, pulse_width;
    pulse_wide = map(i, 0, 1000, 650,2350);
    pulse_width = double(float(pulse_wide) / 1000000 * 50 * 4096);
    pwm.setPWM(5, 0, pulse_width);
    delay(50);
    }
}

void for6(double time){
    for(double i=440;i>=220;i=i-11){
    double pulse_wide, pulse_width;
    pulse_wide = map(i, 0, 1000, 650,2350);
    pulse_width = double(float(pulse_wide) / 1000000 * 50 * 4096);
    pwm.setPWM(6, 0, pulse_width);
    delay(50);
    }
    delay(time);

  for(double i=220;i<=440;i=i+11){
    double pulse_wide, pulse_width;
    pulse_wide = map(i, 0, 1000, 650,2350);
    pulse_width = double(float(pulse_wide) / 1000000 * 50 * 4096);
    pwm.setPWM(6, 0, pulse_width);
    delay(50);
    }
}

void back6(double time){
  for(double i=470;i<=743;i=i+13.65){
    double pulse_wide, pulse_width;
    pulse_wide = map(i, 0, 1000, 650,2350);
    pulse_width = double(float(pulse_wide) / 1000000 * 50 * 4096);
    pwm.setPWM(6, 0, pulse_width);
    delay(50);
  }
  delay(time);

  for(double i=743;i>=470;i=i-13.65){
    double pulse_wide, pulse_width;
    pulse_wide = map(i, 0, 1000, 650,2350);
    pulse_width = double(float(pulse_wide) / 1000000 * 50 * 4096);
    pwm.setPWM(6, 0, pulse_width);
    delay(50);
    }
}

void back45(){
  for(double i=440, j=470;i>=225,j<=740;i=i-10.75, j=j+13.5){
    
    double pulse_wide4, pulse_width4,pulse_wide5, pulse_width5;
    pulse_wide4 = map(i, 0, 1000, 650,2350);
    pulse_width4 = double(float(pulse_wide4) / 1000000 * 50 * 4096);
    pulse_wide5 = map(j, 0, 1000, 650,2350);
    pulse_width5 = double(float(pulse_wide5) / 1000000 * 50 * 4096);
    pwm.setPWM(4, 0, pulse_width4);
    pwm.setPWM(5, 0, pulse_width5);
    delay(50);
  }
  delay(7500);

  for(double i=225,j=740;i<=440, j>=470;i=i+10.75, j=j-13.5){

    double pulse_wide4, pulse_width4,pulse_wide5, pulse_width5;
    pulse_wide4 = map(i, 0, 1000, 650,2350);
    pulse_width4 = double(float(pulse_wide4) / 1000000 * 50 * 4096);
    pulse_wide5 = map(j, 0, 1000, 650,2350);
    pulse_width5 = double(float(pulse_wide5) / 1000000 * 50 * 4096);
    pwm.setPWM(4, 0, pulse_width4);
    pwm.setPWM(5, 0, pulse_width5);
    delay(50);
  }
}

void back46(){
  for(double i=440, j=440;i>=225,j>=225;i=i-10.75, j=j-10.75){

    double pulse_wide4, pulse_width4,pulse_wide6, pulse_width6;
    pulse_wide4 = map(i, 0, 1000, 650,2350);
    pulse_width4 = double(float(pulse_wide4) / 1000000 * 50 * 4096);
    pulse_wide6 = map(j, 0, 1000, 650,2350);
    pulse_width6 = double(float(pulse_wide6) / 1000000 * 50 * 4096);
    pwm.setPWM(4, 0, pulse_width4);
    pwm.setPWM(6, 0, pulse_width6);
    delay(50);
  }
  delay(7500);

  for(double i=225, j=225;i<=440, j<=440;i=i+10.75, j=j+10.75){

    double pulse_wide4, pulse_width4,pulse_wide6, pulse_width6;
    pulse_wide4 = map(i, 0, 1000, 650,2350);
    pulse_width4 = double(float(pulse_wide4) / 1000000 * 50 * 4096);
    pulse_wide6 = map(j, 0, 1000, 650,2350);
    pulse_width6 = double(float(pulse_wide6) / 1000000 * 50 * 4096);
    pwm.setPWM(4, 0, pulse_width4);
    pwm.setPWM(6, 0, pulse_width6);
    delay(50);
    }
}

void back56(){
  for(double i=470, j=440; i<=743,j>=225;i=i+13.65, j=j-10.75){

    double pulse_wide5, pulse_width5,pulse_wide6, pulse_width6;
    pulse_wide5 = map(i, 0, 1000, 650,2350);
    pulse_width5 = double(float(pulse_wide5) / 1000000 * 50 * 4096);
    pulse_wide6 = map(j, 0, 1000, 650,2350);
    pulse_width6 = double(float(pulse_wide6) / 1000000 * 50 * 4096);
    pwm.setPWM(5, 0, pulse_width5);
    pwm.setPWM(6, 0, pulse_width6);
    delay(50);
  }
  delay(7500);

  for(double i=743, j=225; i>=470, j<=440;i=i-13.65, j=j+10.75){

    double pulse_wide5, pulse_width5,pulse_wide6, pulse_width6;
    pulse_wide5 = map(i, 0, 1000, 650,2350);
    pulse_width5 = double(float(pulse_wide5) / 1000000 * 50 * 4096);
    pulse_wide6 = map(j, 0, 1000, 650,2350);
    pulse_width6 = double(float(pulse_wide6) / 1000000 * 50 * 4096);
    pwm.setPWM(5, 0, pulse_width5);
    pwm.setPWM(6, 0, pulse_width6);
    delay(50);
    }
}



void loop() {
  stop(1,100);
  stop2(2,100);
  stop(3,100);
  stop(4,100);
  stop(5,100);
  stop(6,100);

  grab1();  
  grab3();  
  grab2();  

  // letgo1();  
  // letgo2(); 
  // letgo3();

  delay(100000000);
}
