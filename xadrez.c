#include <stdio.h>


// Desafio de Xadrez - MateCheck

#include <stdio.h>
// Cavalo (Cima Cima Direita)
void moverCavalo(int movimentos) {
    int movimentosRealizados = 0;

    printf("\nMovimento do Cavalo:\n");
    for (int i = 0; i < movimentos; i++) {
        for (int j = 0; j < 3; j++) {
            if (j == 2) {
                printf("Direita\n"); // Terceiro passo: direita
                break; // termina este loop
            }

            if (j < 2) {
                printf("Cima\n"); // Primeiros dois passos: cima
                continue; // volta para o início do loop j
            }
        }
        movimentosRealizados++;
    }
}

// Bispo (Diagonal Cima Direita)
void moverBispo(int casas) {
    if (casas <= 0) return;

    // Loop externo: simula o movimento vertical
    for (int v = 0; v < 1; v++) {
        // Loop interno: simula o movimento horizontal
        for (int h = 0; h < 1; h++) {
            printf("Cima Direita\n");
        }
    }

    moverBispo(casas - 1); // chamada recursiva
}

void moverRainha(int casas) {
    if (casas <= 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

//Torre para a Direita
void moverTorre(int casas) {
    if (casas <= 0) return; // Condição de parada
    printf("Direita\n");
    moverTorre(casas - 1); // Chamada recursiva
}

int main() {
   // Movimento da TORRE usando recursão
    int casasTorre = 4;
    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);

    // Movimento do BISPO usando recursão + loops aninhados
    int casasBispo = 5;
    printf("\nMovimento do Bispo:\n");
    moverBispo(casasBispo);

    // Movimento da RAINHA usando recursão
    int casasRainha = 3;
    printf("\nMovimento da Rainha:\n");
    moverRainha(casasRainha);

    // Movimento do CAVALO com loops complexos (2x Cima, 1x Direita)
    int movimentosCavalo = 2; // número de "L" que o cavalo fará
    moverCavalo(movimentosCavalo);
}