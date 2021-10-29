void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  morse_multiple_dot(3); // chamo a função passando o valor 3

  morse_multiple_dash(3);

  morse_multiple_dot(3);

  delay(2000);
}

//Pisca o LED no padrão dot
void dot(){
  digitalWrite(LED_BUILTIN, HIGH);
  delay(250);
  digitalWrite(LED_BUILTIN, LOW);
  delay(250);
}

//Pisca o LED no padrão dash
void dash(){
  digitalWrite(LED_BUILTIN, HIGH);
  delay(750);
  digitalWrite(LED_BUILTIN, LOW);
  delay(250);
}

//Função que faz as repetições da função dot
void morse_multiple_dot(int n){
  for(int i=0; i<n ; i++){
    dot();
  }
}

//função que faz as repetições da função dash
void morse_multiple_dash(int n){
  for(int i=0; i<n ; i++){
    dash();
  }
}
