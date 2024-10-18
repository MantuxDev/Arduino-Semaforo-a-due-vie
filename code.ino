// Semaforo a 2 vie

// Tempi
const int temp1=15000; // tempo sefamoro verde/rosso
const int temp2=5000;  // tempo semfaoro giallo 
const int temp3=2000;  // tempo tra verde di una via e rosso di un altro

// Pin
const int verde1=13;
const int verde2=5;
const int giallo1=12;
const int giallo2=4;
const int rosso1=11;
const int rosso2=3;

void setup()
{
  pinMode(verde1,OUTPUT);
  pinMode(verde2,OUTPUT);
  
  pinMode(giallo1,OUTPUT);
  pinMode(giallo2,OUTPUT);
  
  pinMode(rosso1,OUTPUT);
  pinMode(rosso2,OUTPUT);
}

void loop()
{
  digitalWrite(verde1,HIGH);
  digitalWrite(rosso2,HIGH);
  delay(temp1);
  
  digitalWrite(verde1,LOW);
  digitalWrite(giallo1,HIGH);
  delay(temp2);
  
  digitalWrite(giallo1,LOW);
  digitalWrite(rosso1,HIGH);
  delay(temp3);
  
  digitalWrite(rosso2,LOW);
  digitalWrite(verde2,HIGH);
  delay(temp1);
  
  digitalWrite(verde2,LOW);
  digitalWrite(giallo2,HIGH);
  delay(temp2);
  
  digitalWrite(giallo2,LOW);
  digitalWrite(rosso2,HIGH);
  delay(temp3);
  
  digitalWrite(rosso1,LOW);
}