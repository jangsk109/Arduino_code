//main_algorithm
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
    delay(6400);

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
  delay(6400);

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
  delay(6000);

  for(double i=880;i>=460;i=i-21.5){
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
    delay(5950);

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

void for4(int time){
  for(int i=440;i>=220;i=i-12){
    int pulse_wide, pulse_width;
    pulse_wide = map(i, 0, 1000, 650,2350);
    pulse_width = int(float(pulse_wide) / 1000000 * 50 * 4096);
    pwm.setPWM(4, 0, pulse_width);
    delay(50);
    }
    delay(time);

  for(int i=220;i<=440;i=i+11){
    int pulse_wide, pulse_width;
    pulse_wide = map(i, 0, 1000, 650,2350);
    pulse_width = int(float(pulse_wide) / 1000000 * 50 * 4096);
    pwm.setPWM(4, 0, pulse_width);
    delay(50);
    }
}

void back4(int time){
  for(int i=460;i<=743;i=i+14.15){
    int pulse_wide, pulse_width;
    pulse_wide = map(i, 0, 1000, 650,2350);
    pulse_width = int(float(pulse_wide) / 1000000 * 50 * 4096);
    pwm.setPWM(4, 0, pulse_width);
    delay(50);
  }
  delay(time);

  for(int i=743;i>=460;i=i-14.15){
    int pulse_wide, pulse_width;
    pulse_wide = map(i, 0, 1000, 650,2350);
    pulse_width = int(float(pulse_wide) / 1000000 * 50 * 4096);
    pwm.setPWM(4, 0, pulse_width);
    delay(50);
    }
}

void for5(int time){
  for(int i=460;i<=743;i=i+14.15){
    int pulse_wide, pulse_width;
    pulse_wide = map(i, 0, 1000, 650,2350);
    pulse_width = int(float(pulse_wide) / 1000000 * 50 * 4096);
    pwm.setPWM(5, 0, pulse_width);
    delay(50);
  }
  delay(time);

  for(int i=743;i>=460;i=i-14.15){
    int pulse_wide, pulse_width;
    pulse_wide = map(i, 0, 1000, 650,2350);
    pulse_width = int(float(pulse_wide) / 1000000 * 50 * 4096);
    pwm.setPWM(5, 0, pulse_width);
    delay(50);
    }
}

void back5(int time){
    for(int i=440;i>=220;i=i-11){
    int pulse_wide, pulse_width;
    pulse_wide = map(i, 0, 1000, 650,2350);
    pulse_width = int(float(pulse_wide) / 1000000 * 50 * 4096);
    pwm.setPWM(5, 0, pulse_width);
    delay(50);
    }
    delay(time);

  for(int i=220;i<=440;i=i+11){
    int pulse_wide, pulse_width;
    pulse_wide = map(i, 0, 1000, 650,2350);
    pulse_width = int(float(pulse_wide) / 1000000 * 50 * 4096);
    pwm.setPWM(5, 0, pulse_width);
    delay(50);
    }
}

void for6(int time){
    for(int i=440;i>=220;i=i-11){
    int pulse_wide, pulse_width;
    pulse_wide = map(i, 0, 1000, 650,2350);
    pulse_width = int(float(pulse_wide) / 1000000 * 50 * 4096);
    pwm.setPWM(6, 0, pulse_width);
    delay(50);
    }
    delay(time);

  for(int i=220;i<=440;i=i+11){
    int pulse_wide, pulse_width;
    pulse_wide = map(i, 0, 1000, 650,2350);
    pulse_width = int(float(pulse_wide) / 1000000 * 50 * 4096);
    pwm.setPWM(6, 0, pulse_width);
    delay(50);
    }
}

void back6(int time){
  for(int i=470;i<=743;i=i+13.65){
    int pulse_wide, pulse_width;
    pulse_wide = map(i, 0, 1000, 650,2350);
    pulse_width = int(float(pulse_wide) / 1000000 * 50 * 4096);
    pwm.setPWM(6, 0, pulse_width);
    delay(50);
  }
  delay(time);

  for(int i=743;i>=470;i=i-13.65){
    int pulse_wide, pulse_width;
    pulse_wide = map(i, 0, 1000, 650,2350);
    pulse_width = int(float(pulse_wide) / 1000000 * 50 * 4096);
    pwm.setPWM(6, 0, pulse_width);
    delay(50);
    }
}

void back45(){
  for(double i=460, j=440;i<=740,j>=220;i=i+14, j=j-11){
    
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

  for(double i=740,j=220;i>=460, j<=440;i=i-14, j=j+11){

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
  for(double i=460, j=460;i<=740,j<=740;i=i+14, j=j+14){

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

  for(double i=740, j=740;i>=460, j>=460;i=i-14, j=j-14){

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
  for(double i=440, j=460; i>=220,j<=740;i=i-11, j=j+14){

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

  for(double i=220, j=740; i<=440, j>=460;i=i+11, j=j-14){

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
  //1.robot initialization
  stop(1,1000);
  stop2(2,1000);
  stop(3,1000);

  letgo1();
  //2.motor4 gripper1 forward 100mm
  for4(14800);
  grab1(); 

  letgo3();
  //3. motor6 gripper3 forward 50mm
  for6(7200);
  grab3();

  letgo2();
  //4. motor5 gripper2 forward 100+100+50=250mm*
  for5(15500);
  for5(15500);
  for5(7430);
  grab2();

  letgo3();
  //5. motor45 gripper12 backward 100mm*
  back45();
  back45();
  //6. motor6 gripper3 200mm*
  for6(32000);
  grab3();

  letgo1();
  //7.motor4 gripper1 100+100=200mm*
  for4(14800);
  for4(14800);
  grab1();

  letgo2();
  //8.motor46 gripper 13 backward 50+50+50+50=200*
  back46();
  back46();
  back46();
  back46();
  //9. motor5 gripper2 forward 100mm
  for5(15500);
  grab2();

  letgo1();
  //10. motor56 gripper 23 backward 50*
  back56();
  //11. motor4 gripper1 forward 50+100+100=250
  for4(7450);
  for4(14800);
  for4(14800);
  grab1();

  letgo3();
  //12. motor45 gripper12 backward 50+50+50+50=200*
  back45();
  back45();
  back45();
  back45();
  //13. motor6 gripper3 forward 50+200=250
  for6(7200);
  for6(32000);
  grab3();

  letgo2();
  //motor46 gripper13 back 50
  back46();
  //motor5 gripper2 forward 100+100=200
  for5(15500);
  for5(15500);
  grab2();

  letgo1();
  //motor4 gripper1 forward 100+100=200 
  for4(14800);
  for4(14800);
  grab1();

  stop(1,50000000);
  stop2(2,50000000);
  stop(3,50000000);

}

