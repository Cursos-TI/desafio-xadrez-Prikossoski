#include <stdio.h>


// Desafio de Xadrez - MateCheck

int main() {

    char coluna_atual = 'a'; // Começa na coluna 'a'
    char linha_atual = 1;     // Começa na linha 1
    int i = 1;

    printf("Iniciando o movimento da Torre...\n");
    printf("Posição inicial: %c%d\n", coluna_atual, linha_atual);

    for(int i = 0; i < 5; i++)
        coluna_atual++; // Move a torre uma casa para a direita
        
        if (coluna_atual > 'h') {
            printf("A Torre sairia do tabuleiro na casa %c%d! Movimento interrompido.\n", coluna_atual, linha_atual);
        }
        
        // A posição da torre após cada passo
        printf("Passo %d: Nova posição: %c%d\n", i + 1, coluna_atual, linha_atual);
         // Mensagem final para a Torre
    if (coluna_atual <= 'h') { // Verifica se não saiu do tabuleiro
        printf("Movimento da Torre para a direita concluído. Posição final: %c%d\n", coluna_atual, linha_atual);
    } else {
        printf("Movimento da Torre interrompido por sair do tabuleiro.\n");
    }
        
    return 0;
    }
   

    return 0;
}
