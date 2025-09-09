#include <stdio.h>


void moverTorre (int casas){ 
void moverRainha (int casas);
void MoverBispo (int casas);
void MoverCavalo (int Casas);

if (casas > 0){
     printf("Direita\n");
     moverTorre( casas - 1);

    }
}
void moverBispo(int casas){
  if (casas > 0){
     printf("Direita Pra cima\n");
     moverBispo( casas - 1);
  }

 }
     void moverRainha(int casas){
  if (casas > 0){
     printf("Mover para a Direita\n");
     moverRainha( casas - 1);
  }
}
   void moverCavalo (int casas){
 if (casas > 0){
    printf("mover em L\n");
    moverCavalo (casas - 1);
 }
}


int main() {
moverTorre(5);
moverBispo(5);
moverRainha(5);
moverCavalo(5);



return 0;

}