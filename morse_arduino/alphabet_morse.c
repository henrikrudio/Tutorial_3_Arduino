#include "alphabet_morse.h"
#include "morse.h"
#include "Arduino.h"


void a(){
  morse_multiple_dot(1);
  morse_multiple_dash(2);
}

void b(){
  morse_multiple_dash(1);
  morse_multiple_dot(3);
}

void c(){
  morse_multiple_dash(1);
  morse_multiple_dot(1);
  morse_multiple_dash(1);
  morse_multiple_dot(1);
}

void d(){
  morse_multiple_dash(1);
  morse_multiple_dot(2);
}

void e(){
  morse_multiple_dot(1);
}

void f(){
  morse_multiple_dot(2);
  morse_multiple_dash(1);
  morse_multiple_dot(1);
}

void g(){
  morse_multiple_dash(2);
  morse_multiple_dot(1);
}

void h(){
  morse_multiple_dot(4);
}
