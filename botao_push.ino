const int ledPin = 13;
const int Botao = 2;
int EstadoBotao = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(Botao, INPUT);
  
}

void loop() {
  EstadoBotao = digitalRead (Botao);


    if (EstadoBotao == HIGH){
      digitalWrite (ledPin, HIGH);
    }
    else{
      digitalWrite (ledPin, LOW);    }
}
