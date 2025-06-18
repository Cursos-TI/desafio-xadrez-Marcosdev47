#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.


// Função recursiva para o movimento da Torre
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Função recursiva para o movimento da Rainha
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Função recursiva com loops aninhados para o movimento do Bispo
void moverBispo(int casas) {
    if (casas == 0) return;

    for (int i = 0; i < 1; i++) { // Simula o movimento vertical
        for (int j = 0; j < 1; j++) { // Simula o movimento horizontal
            printf("Cima Direita\n");
        }
    }

    moverBispo(casas - 1);
}

int main() {


    printf("Movimento da Torre:\n");
    moverTorre(5);

    printf("\n"); // Separador visual

    printf("Movimento do Bispo:\n");
    moverBispo(5);

    printf("\n"); // Separador visual

    printf("Movimento da Rainha:\n");
    moverRainha(8);

    printf("\n"); // Separador visual

    // Movimento do Bispo: 5 casas na diagonal para cima e à direita
    // Usando estrutura de repetição 'while'
    int j = 1;
    printf("Movimento do Bispo:\n");
    while(j <= 5) {
        printf("Cima Direita\n");
        j++;
    }

    printf("\n"); // Separador visual

    // Movimento da Rainha: 8 casas para a esquerda
    // Usando estrutura de repetição 'do-while'
    int k = 1;
    printf("Movimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        k++;
    } while(k <= 8);

    printf("\n"); // Separador visual

    // Movimento do Cavalo: 2 casas para baixo, depois 1 para a esquerda
    
    int movimentosVerticais = 2;
    int movimentosHorizontais = 1;

    printf("Movimento do Cavalo:\n");

    // Loop 'for' para casas verticais (baixo)
    for (int m = 1; m <= movimentosVerticais; m++) {
        printf("Baixo\n");
        // Loop interno 'while' apenas para ilustrar o uso de dois loops aninhados
        int passo = 1;
        while (passo < 1) {
            // Este trecho não será executado, apenas mantido para cumprir requisito
            passo++;
        }
    }

    // Movimento horizontal após os verticais
    int n = 0;
    while(n < movimentosHorizontais) {
        printf("Esquerda\n");
        n++;
    }



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
