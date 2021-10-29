extern "C"{
  #include "morse.h"
  #include "alphabet_morse.h"
}

void setup(){
  morse_set_pin(LED_BUILTIN);
  morse_set_unit_delay(250);
}

void loop(){
  //a();
  //b();
  //c();
  //d();
  //e();
  //f();
  //g();
  h();
  delay(2000);
}
