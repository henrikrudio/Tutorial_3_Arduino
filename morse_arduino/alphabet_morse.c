#include "alphabet_morse.h"
#include "morse.h"
#include "Arduino.h"

void O(){
  morse_multiple_dash(3);
}

void S(){
  morse_multiple_dot(3);
}
