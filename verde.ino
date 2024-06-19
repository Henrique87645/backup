
/*Posições vetor:
  [0] = esquerda
  [1] = centro
  [2] = direita
  [3] = direita 90
  [4] = esquerda 90
*/
void Verde() {
 ///ler o valor do LDR
 //O valor lido será entre 0 e 1023 
  ldrEsq = digitalRead(ldrEsquerdo1);
  ldrDir = digitalRead(ldrDireito1);


  //notação verde na esquerda
  if ((ldrEsq == 1) && (ldrDir == 0)) { 
        //Enquanto seu valor estiver ligado, ele gira para a esquerda
        moverFrente(150);
        delay(500);
        while ((digitalRead(IR[1]) == 0)) {
          Serial.println("90 esquerda");
          moverEsquerda90(200);
          delay(20);
        }
  } 

  //notação verde na direita
  if ((ldrEsq == 0) && (ldrDir == 1)) { 
        //Enquanto seu valor estiver ligado, ele gira para a direita
        moverFrente(150);
        delay(500);
        while ((digitalRead(IR[1]) == 0)) {
          Serial.println("90 direita");
          moverDireita90(200);
          delay(20);
        }
  } 
  // //beco sem saida (dois verdes ativados)
  // if ((analogRead(ldrEsq) > verdeVal) && (analogRead(ldrDir) > verdeVal)) { 
  //   if((digitalRead(IR[3]) == 0) && (digitalRead(IR[4]) == 0)){
  //     Serial.println("beco verde");  
  //     moverTras(V);
  //     delay(15);
  //   }
  // }
}
