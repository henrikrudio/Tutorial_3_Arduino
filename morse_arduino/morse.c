#include "morse.h"
#include "Arduino.h"

static int _pin;
static int _unit_delay;

static void dot();
static void dash();

void morse_set_pin(int pin){
  _pin = pin;

  pinMode(pin, OUTPUT);
}

void morse_set_unit_delay(int unit_delay){
  _unit_delay = unit_delay;
}

void morse_multiple_dot(int n){
  for(int i=0 ; i<n ; i++){
    dot();
  }
}

void morse_multiple_dash(int n){
  for(int i=0 ; i<n ; i++){
    dash();
  }
}

static void dot(){
  digitalWrite(_pin, HIGH);
  delay(_unit_delay);
  digitalWrite(_pin, LOW);
  delay(_unit_delay);
}

static void dash(){
  digitalWrite(_pin, HIGH);
  delay(3 * _unit_delay);
  digitalWrite(_pin, LOW);
  delay(_unit_delay);
}
