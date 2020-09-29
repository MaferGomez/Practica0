//Conexiones
int rojo_sem1=8; //Led (rojo) para 6 seg
int amarillo_sem1=9; //Led (amarillo)para 1 seg
int verde_sem1=10; //Led (verde) para 5 seg
int rojo_sem2=11; //Led (rojo) para 6 seg
int amarillo_sem2=12; //Led (amarillo)para 1 seg
int verde_sem2=13; //Led (verde) para 5 seg

void setup() {
//Inicialización
digitalWrite(verde_sem1,LOW);
digitalWrite(rojo_sem1,LOW);
digitalWrite(amarillo_sem1,LOW);
digitalWrite(verde_sem2,LOW);
digitalWrite(rojo_sem2,HIGH);
digitalWrite(amarillo_sem2,LOW);

pinMode(verde_sem1,OUTPUT);
pinMode(rojo_sem1,OUTPUT);
pinMode(amarillo_sem1,OUTPUT);
pinMode(verde_sem2,OUTPUT);
pinMode(rojo_sem2,OUTPUT);
pinMode(amarillo_sem2,OUTPUT);
}


void loop()
{
  //Secuencia semáforo 1
  //Led verde
  digitalWrite(verde_sem1,HIGH);
  digitalWrite(rojo_sem1,LOW);
  delay(5000);
  digitalWrite(verde_sem1,LOW);
  //Led amarillo
  digitalWrite(amarillo_sem1,HIGH);
  delay(1000);
  digitalWrite(amarillo_sem1,LOW);
  //Led rojo
  digitalWrite(rojo_sem1,HIGH);

  //Secuencia semaforo 2
  //Led verde
  digitalWrite(verde_sem2,HIGH);
  digitalWrite(rojo_sem2,LOW);
  delay(5000);
  digitalWrite(verde_sem2,LOW);
  //Led amarillo
  digitalWrite(amarillo_sem2,HIGH);
  delay(1000);
  digitalWrite(amarillo_sem2,LOW);
  //Led rojo
  digitalWrite(rojo_sem2,HIGH);
  
}
