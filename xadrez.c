/*#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
*/

#include <stdio.h>

int main(){

    int contador = 1; // VARIAVEL PARA CONTROLAR O LAÇO DE REPETIÇÃO
     

    //CODIGO EXIBE SIMULAÇÃO DAS DIRECOES DE MOVIMENTAÇÃO DAS PEÇAS DE XADREZ 'BISPO, TORRE E RAINHA EM UM TABULEIRO DE XADREZ


    //MOVIMENTAÇÃO DA PEÇA BISPO NO TABULEIRO DE XADREZ UTILIZANDO INTRUÇÃO 'WHILE'
    //MOVER BISPO PARA DIAGONAL FRENTE DIREITA
    printf("MOVIMENTOS PEÇA DO BISPO\n");
    while(contador < 5){

        printf("FRENTE\n");
        printf("DIREITA\n");
        contador++;
    }

    //MOVER BISPO PARA DIAGONAL FRENTE ESQUERDA
    while(contador < 5){

        printf("FRENTE\n");
        printf("ESQUERA\n");
        contador++;
    }
     contador = 1;
    //MOVER BISPO PARA DIAGONAL ATRAS DIREITA
    while(contador < 5){

        printf("ATRAS\n");
        printf("DIREITA\n");
        contador++;
    }
    contador = 1;
    //MOVER BISPO PARA DIAGONAL ATRAS ESQUERDA
    while(contador < 5){

        printf("ATRAS\n");
        printf("ESQUERA\n");
        contador++;
    }
    contador = 1; 
    printf("MOVIMENTOS PEÇA DA TORRE\n");
    //MOVIMENTAÇÃO DA PEÇA TORRE NO TABULEIRO DE XADREZ UTILIZANDO INTRUÇÃO 'DO WHILE'
    //"DO While" executa sempre ao menos uma vez
    //MOVER PEÇA TORRE FRENTE
     do{
        printf("FRENTE\n");
      
        contador++;
       }
     while(contador < 5);

     contador = 1;
    //MOVER PEÇA TORRE ATRAS
     do{
        printf("ATRAS\n");
      
        contador++;
       }
     while(contador < 5);

     contador = 1;
    //MOVER PEÇA TORRE DIREITA
     do{
        printf("DIREITA\n");
      
        contador++;
       }
     while(contador < 5);
     contador = 1;
    // MOVER PEÇA TORRE ESQUERDA
     do{
        printf("ESQUERDA\n");
      
        contador++;
       }
     while(contador < 5);
     contador = 1;

     printf("MOVIMENTOS PEÇA DA RAINHA\n");
    //MOVIMENTAÇÃO DA PEÇA RAINHA NO TABULEIRO DE XADREZ UTILIZANDO INTRUÇÃO 'FOR'
    //for precisa de inicialização, condiçcao, incremento
    //MOVER PEÇA RAINHA PARA FRENTE
    for(contador=1; contador < 5;contador++){
        printf("FRENTE\n");
    }
    contador = 1;
    //MOVER PEÇA RAINHA PARA ATRAS
     for(contador=1; contador < 5;contador++){
        printf("ATRAS\n");
    } 
     contador = 1;   
    //MOVER PEÇA RAINHA PARA A DIREITA
    for(contador=1; contador < 5;contador++){
        printf("DIREITA\n");
    }
    contador = 1;
    //MOVER PEÇA RAINHA PARA A ESQUERDA
    for(contador=1; contador < 5;contador++){
        printf("ESQUERA\n");
    }
    contador = 1;
    //MOVER PEÇA RAINHA DIAGONAL FRENTE ESQUERDA
    for(contador=1; contador < 5;contador++){
        printf("FRENTE\n");
        printf("ESQUERDA\n");
    }
    contador = 1;
        //MOVER PEÇA RAINHA DIAGONAL FRENTE DIREITA
    for(contador=1; contador < 5;contador++){
        printf("FRENTE\n");
        printf("DIREITA\n");
    }
    contador = 1;
        //MOVER PEÇA RAINHA DIAGONAL ATRAS ESQUERDA
    for(contador=1; contador < 5;contador++){
        printf("ATRAS\n");
        printf("ESQUERDA\n");
    }
    contador = 1;
        //MOVER PEÇA RAINHA DIAGONAL ATRAS DIREITA
    for(contador=1; contador < 5;contador++){
        printf("ATRAS\n");
        printf("ESQUERDA\n");

     return 0;
}
}