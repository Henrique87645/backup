//Arquivo principal que chama funções e adiciona biblioteca
#include <AFMotor.h>//biblioteca de motores
#define ldrEsquerdo1 A14//verde esquerdo
#define ldrDireito1 A15//verde direito

//motores
AF_DCMotor motor3(1); //Seleção do Motor 1
AF_DCMotor motor4(2); //Seleção do Motor 2


int V = 100;// velocidade
int C = 100; // correção curva de 90
int c = 30;//correção segue linha

//segue linha
int IR[] = {48, 44, 50, 52, 46};

/*Posições vetor:
  [0] = esquerda
  [1] = centro
  [2] = direita
  [3] = direita 90
  [4] = esquerda 90
*/


//LDR (verde) 
 int verdeVal = 400; 
 int ldrEsq = 0; 
 int ldrDir = 0; 

void setup(){
//DECLARANDO O SENSOR IR COMO INPUT
    for (int i = 0; i <= 5; i++) {
   pinMode(IR[i], INPUT);
   }     

  //LED
  pinMode(24, OUTPUT);
  pinMode(22, OUTPUT);

  //Verde
  pinMode(ldrEsquerdo1, INPUT); 
  pinMode(ldrDireito1, INPUT); 

  //Setup Serial Monitor
  Serial.begin(9600); 
}

void loop() {
  digitalWrite(22,HIGH);
  digitalWrite(24,LOW);

  //TESTE VOIDS
  Curva90(); 
  Seguelinha();
  //Verde();


  //testes do motor
  //moverFrente(255);
  //moverTras(255);   

  
  //parar(0);
}
