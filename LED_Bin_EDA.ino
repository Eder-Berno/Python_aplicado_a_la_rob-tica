int estado=0;
int estadoAnt=0;
int salida=0;
void setup() {
  // put your setup code here, to run once:
  pinMode(8,INPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  estado=digitalRead(8);
  if ((estado==HIGH) && (estadoAnt==LOW))
  {
    salida=3-salida;
    delay(20);
  }

  estadoAnt = estado;
  switch(salida){
    case 3:
        digitalWrite(10,HIGH);
        digitalWrite(9,LOW);
    break;
    case 2:
        digitalWrite(10,LOW);
        digitalWrite(9,HIGH);
    break;
    case 1:
        digitalWrite(10,HIGH);
        digitalWrite(9,HIGH);
    break;
    default:
        digitalWrite(10,LOW);
        digitalWrite(9,LOW);
    break;
  }
}
