#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>

Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver();

char input;


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

  //motor 4 forward and backwards 
      //50mm(checked)
      // stop(4,1000);
      // for4(4,7450);
      // stop(4,1000);  
      // back4(4,7000);
      // stop(4,50000000);

      //100mm(checked)
      // stop(4,2000);
      // for4(4,14800);
      // stop(4,5000);  
      // back4(4,14400);
      // stop(4,50000000);

      //200mm(checked)
      // stop(4,2000);
      // for4(2,0);
      // back4(4,30070);
      // stop(4,1000);  
      // stop(4,50000000);

  //motor 5 forward and backwards 
      //50mm
      // stop(5,1000);
      // for5(5,7430);
      // stop(5,1000);  
      // back5(5,7400);
      // stop(5,50000000);

      //100mm+150mm (checked)
      // stop(5,2000);
      // for5(15500);
      // stop(5,2000); 
      // for5(24500);
      // stop(5,3000);  
      // back5(25500);
      // stop(5,2000); 
      // back5(16500);
  stop(4,50000000);
  stop(5,50000000);
  stop(6,50000000);

  //motor 6 forward and backwards 

      //50mm(checked)
      // stop(6,2000);
      // for6(6,7200);
      // stop(6,1000);  
      // back6(6,6950);
      // stop(6,50000000);

      //200mm (checked)
      // stop(6,2000);
      // for6(6,32000);
      // stop(6,1000);  
      // back6(6,30000);
      // stop(6,50000000);


}
