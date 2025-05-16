

// Desafio de Xadrez - MateCheck


#include <stdio.h>

int main(){
    int movimentaTorre = 5;
    int movimentaBispo = 5;
    int movimentaRainha;
    int movimentaCavalo;

     //MOVIMENTOS PEÇA DA TORRE USANDO DO WHILE
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
    
    return 0;
  } 
