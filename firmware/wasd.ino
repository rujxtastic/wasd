#include <Keyboard.h>

#define W 1
#define A 2
#define S 3
#define D 4

#define LF 9
#define LB 10
#define RF 11
#define RB 8

const int speed = 50; 

void setup() {
  Keyboard.begin();
  pinMode(W, INPUT_PULLUP);
  pinMode(A, INPUT_PULLUP);
  pinMode(S, INPUT_PULLUP);
  pinMode(D, INPUT_PULLUP);

  pinMode(LF, OUTPUT);
  pinMode(LB, OUTPUT);
  pinMode(RF, OUTPUT);
  pinMode(RB, OUTPUT);

  digitalWrite(5, HIGH); //EN 1,2
  digitalWrite(6, HIGH); //EN 3,4
}

void loop() {
  bool w, a, s, d;
  w = digitalRead(W)==LOW;
  a = digitalRead(A)==LOW;
  s = digitalRead(S)==LOW;
  d = digitalRead(D)==LOW;

  //apologies
  if(w && !s && (a == d)){ //just w
    analogWrite(LB, 0);
    analogWrite(RB, 0);
    analogWrite(LF, speed);
    analogWrite(RF, speed);
  }
  else if(w && a && !s && !d){ //w+a
    analogWrite(LB, 0);
    analogWrite(RB, 0);
    analogWrite(LF, speed);
    analogWrite(RF, speed*2);
  }
  else if(w && !a && !s && d){//w+d
    analogWrite(LB, 0);
    analogWrite(RB, 0);
    analogWrite(LF, speed*2);
    analogWrite(RF, speed);
  }
  else if(!w && s && (a == d)){//just s
    analogWrite(LB, speed);
    analogWrite(RB, speed);
    analogWrite(LF, 0);
    analogWrite(RF, 0);
  }
  else if(!w && a && s && !d){//s+a
    analogWrite(LB, speed);
    analogWrite(RB, speed*2);
    analogWrite(LF, 0);
    analogWrite(RF, 0);
  }
  else if(!w && !a && s && d){//s+d
    analogWrite(LB, speed*2);
    analogWrite(RB, speed);
    analogWrite(LF, 0);
    analogWrite(RF, 0);
  }
  else if(a && !d && (w == s)){//just a
    analogWrite(LB, speed*2);
    analogWrite(RB, 0);
    analogWrite(LF, 0);
    analogWrite(RF, speed*2);
  }
  else if(!a && d && (w == s)){//just d
    analogWrite(LB, 0);
    analogWrite(RB, speed*2);
    analogWrite(LF, speed*2);
    analogWrite(RF, 0);
  }
  else{//nothing or everything
    analogWrite(LB, 0);
    analogWrite(RB, 0);
    analogWrite(LF, 0);
    analogWrite(RF, 0);
  }
}
