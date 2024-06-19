/*void ultrassonico(){
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  distancia = pulseIn(echo, HIGH);

  //CALCULO
  distancia = distancia * 340;
  distancia = distancia / 2;
  distancia = distancia / 10000; // divide por 10000 para ter valor em CM
  //FIM CALCULO

  if ((digitalRead(IR[1]) == 0) && (distancia > 7)) {
    moverTras();//
    delay(250);
    //CONTORNO PELA ESQUERDA
    moverEsquerdaUltra(); 
    delay(650);
    moverFrente();
    delay(700);
    moverDireitaUltra();
    delay(650);
    moverFrente();
    delay(1200);
    moverDireitaUltra();
    delay(650);
    moverFrente();
    delay(650);
    moverEsquerdaUltra(); 
    delay(650); 
    }
} //fim do void
*/