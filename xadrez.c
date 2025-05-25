// Desafio de Xadrez - MateCheck
#include <stdio.h>

//movimento da torre para a direita 5 casas usando função recusiva
void moveTorre(int i){
    if (i > 0 ){
    printf("Direita\n");
    moveTorre(i- 1);
    }
}
//movimento da rainha para esquerda 8 casas usando função recursiva
void moveRainha(int i){
if (i > 0 ){
    printf("Escquerda\n");
    moveRainha(i - 1);
   }
}

void moveCavalo() {
    int i, j;
    // laço aninhado para simular movimento do Cavalo no Xadrez
    for (i = 0; i < 3; i++) {          // Laço externo imprimi "cima"
        for (j = 0; j < 3; j++) {      // Laço interno imprimi "direita"

            if (i < 2 && j == 0) {
                printf("cima ");
                // Após imprimir "cima" nesta iteração, uso comando "continue" para pular para a próxima.
                continue;
            }
            // Apos imprimir duas vez "Cima" a condição sera verdade e ira imprimir "direita"
            if (i == 2 && j == 1) {
                printf("direita");
                // Após imprimir Direita, encerra o bloco com break.
                break;
            }
        }
    }
}
 //simula o movimento da peça de xadrez "Bispo"
 void moveBispo(int loopRecursivo) { 
    int i, j;

    if (loopRecursivo <= 0) {
        return; // encerra o loop quando variavel recursiva chegar a "0"
    }
    //a cada loop recursivo executa uma vez o loop externo e interno como verdadeiro
    for (i = 0; i < 1; i++) { // Loop externo
        printf("Cima\n");
        
        // Loop interno
        for (j = 0; j < 1; j++) { // Loop interno
            printf("Direita\n");
        }
    }
    //subtrai -1 do contador recursivo
    moveBispo(loopRecursivo - 1);
}

int main(){

   //chamada da funcões para imprimir o movimeto das peças de Xadres 
    moveTorre(5);
    printf("\n");
    moveBispo(5);
    printf("\n");
    moveRainha(8);
    printf("\n");
    moveCavalo();
    return 0;
  } 
