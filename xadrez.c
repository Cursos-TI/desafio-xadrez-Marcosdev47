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

    // Movimento do Cavalo: 2 casas para cima e 1 para a direita
    // Utilizando loops aninhados com múltiplas variáveis e controle de fluxo
    printf("Movimento do Cavalo:\n");

    for (int i = 0; i < 3; i++) { // Simula tentativas de movimento
        for (int j = 0; j < 3; j++) {
            if (i == 2 && j == 1) { // Somente na tentativa correta executa o movimento
                int passosVerticais = 2;
                int passosHorizontais = 1;

                for (int v = 0; v < passosVerticais; v++) {
                    printf("Cima\n");
                }
                for (int h = 0; h < passosHorizontais; h++) {
                    printf("Direita\n");
                }

            }
        }
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
