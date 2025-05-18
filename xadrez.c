// Desafio de Xadrez - MateCheck
#include <stdio.h>

//movimento da torre para a direita 5 casas
void moveTorre(int i){
    if (i > 0 ){
    printf("Direita\n");
    moveTorre(i- 1);
    }
}
//movimento da rainha para esquerda 8 casas
void moveRainha(int i){
if (i > 0 ){
    printf("Escquerda\n");
    moveRainha(i - 1);
   }

}
int main(){

     /*MOVIMENTOS PEÇA DA TORRE USANDO DO WHILE
     do{
        printf("Direita\n");
        movimentaTorre--;
       }
    while(movimentaTorre > 0);

    //MOVER BISPO PARA DIAGONAL UTILIZANDO WHILE
    while(movimentaBispo > 0){
        printf("Cima, Direita\n");
        movimentaBispo--;
        }
     
    //MOVER PEÇA RAINHA  UTILIZANDO FOR
    for(movimentaRainha=8; movimentaRainha > 0;movimentaRainha--){
        printf("Esquerda\n");
        }
    //MOVER PEÇA CAVALO USANDO LOOP ANIMHADO
    printf("\n");

    for(movimentaCavalo = 2 ;movimentaCavalo > 0; movimentaCavalo--){
         while (movimentaCavalo > 0){
            printf("baixo\n");  
            movimentaCavalo--;
         }
         printf("Esquerda\n");
        }
    */
    moveTorre(5);
    printf("\n");
    moveRainha(8);
    printf("\n");
    return 0;
  } 
