

extern "C"{
  #include "morse.h"
  #include "alphabet_morse.h"
}

void setup(){
  morse_set_pin(LED_BUILTIN);
  morse_set_unit_delay(250);
}

void loop(){
  S();
  O();
  S();

  delay(2000);
}
