

// Desafio de Xadrez - MateCheck


#include <stdio.h>

int main(){
    int movimentaTorre = 5;
    int movimentaBispo = 5;
    int movimentaRainha;


     //MOVIMENTOS PEÇA DA TORRE USANDO DO WHILE
     do{
        printf("Direita\n");
        movimentaTorre--;
       }
    while(movimentaTorre > 0);

    //MOVER BISPO PARA DIAGONAL UTILIZANDO WHILE
    printf("MOVIMENTOS PEÇA DO BISPO\n");
    while(movimentaBispo > 0){

        printf("Cima, Direita\n");
        movimentaBispo--;
        }
     
    //MOVER PEÇA RAINHA PARA FRENTE UTILIZANDO FOR
    for(movimentaRainha=8; movimentaRainha > 0;movimentaRainha--){
        printf("Esquerda\n");
    

     
}

return 0;
}