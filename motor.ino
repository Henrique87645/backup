
// funções de movimentação do robô que recebem "V" que vai ser velocidade

//MOTORES DE CURVA 90
void moverDireita90(unsigned char V)
{
  motor3.setSpeed(V);
  motor3.run(FORWARD);
  motor4.setSpeed(V);
  motor4.run(FORWARD);
} 

void moverEsquerda90(unsigned char V)
{
  motor3.setSpeed(V);
  motor3.run(BACKWARD);
  motor4.setSpeed(V);
  motor4.run(BACKWARD);
} // FIM MOTOR CURVA 90

//COMEÇO CURVAS IR
void moverDireita(unsigned char V)
{
  motor3.setSpeed(V+c);
  motor3.run(FORWARD);
  motor4.setSpeed(V-c);
  motor4.run(BACKWARD);
} 

void moverEsquerda(unsigned char V)
{
  motor3.setSpeed(V-c);
  motor3.run(FORWARD);
  motor4.setSpeed(V+c);
  motor4.run(BACKWARD);
} // FIM CURVA IR 

//COMEÇO MOVER ULTRASSONICO
void moverDireitaUltra(unsigned char V)
{
  motor3.setSpeed(V);
  motor3.run(FORWARD);
  motor4.setSpeed(V);
  motor4.run(BACKWARD);
} 

void moverEsquerdaUltra(unsigned char V)
{
  motor3.setSpeed(V);
  motor3.run(FORWARD);
  motor4.setSpeed(V);
  motor4.run(BACKWARD);
}//FIM MOVER ULTRASSONICO

void moverFrente(unsigned char V)
{
  motor3.setSpeed(V);
  motor3.run(FORWARD);
  motor4.setSpeed(V);
  motor4.run(BACKWARD);  
} 

void moverTras(unsigned char V)
{
  motor3.setSpeed(V);
  motor3.run(BACKWARD);
  motor4.setSpeed(V);
  motor4.run(FORWARD);
}

void parar(unsigned char V)
{
  motor3.setSpeed(V);
  motor3.run(RELEASE);
  motor4.setSpeed(V);
  motor4.run(RELEASE);
}