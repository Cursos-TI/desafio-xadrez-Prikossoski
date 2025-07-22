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
        
   



     //---Mover a Rainha ---

   char coluna_atual_rainha = 'h';
   int linha_atual_rainha = 4; // Corrected: Changed 'char' to 'int' for line number
   int passos_contados_rainha = 0;

   printf("Movimento da Rainha para a ESQUERDA...\n");
   printf("Posição inicial: %c%d\n", coluna_atual_rainha, linha_atual_rainha);

   do {
    coluna_atual_rainha--;

    if (coluna_atual_rainha < 'a') {
    printf("Passo %d: A Rainha tentou sair do tabuleiro pela esquerda!\n", passos_contados_rainha + 1);
    break; 
    }
    printf("Passo %d: Moveu para a casa %c%d\n", passos_contados_rainha + 1, coluna_atual_rainha, linha_atual_rainha);
    passos_contados_rainha++;
     
   } while (passos_contados_rainha < 8); // Condição: continuar enquanto não tiver dado 8 passos
   
   if (coluna_atual_rainha >= 'a') {
    printf("Movimento para a esquerda concluído. Posição final: %c%d\n", coluna_atual_rainha, linha_atual_rainha);
   } else {
    printf("Movimento para a esquerda interrompido por sair do tabuleiro.\n");
   }


  //Mover o Bispo 5 Casas para Diagonal

    const int MAX_PASSOS = 5; // Define o número máximo de passos desejados.

    int linha_atual_bispo = 0; 
    int coluna_atual_bispo = 0;
    int passos_movidos = 0;

    printf("Simulação do movimento do Bispo no Xadrez\n");
    printf("Posição Inicial do Bispo: %c%d\n\n", 'a' + coluna_atual_bispo, linha_atual_bispo + 1);

    while (passos_movidos < MAX_PASSOS) {
        
        int proxima_linha = linha_atual_bispo + 1;
        int proxima_coluna = coluna_atual_bispo + 1;

        if (proxima_linha > 7 || proxima_coluna > 7) {
            printf("Fim do movimento: O Bispo não pode avançar mais nesta diagonal, pois sairia do tabuleiro.\n");
            break; 
        }

        linha_atual_bispo = proxima_linha;
        coluna_atual_bispo = proxima_coluna;
        passos_movidos++; 

        printf("Passo %d: Moveu para a casa %c%d\n", passos_movidos, 'a' + coluna_atual_bispo, linha_atual_bispo + 1);
    }

    printf("Simulação finalizada após %d passo(s).\n", passos_movidos);
    printf("Posição Final do Bispo: %c%d\n", 'a' + coluna_atual_bispo, linha_atual_bispo + 1);

    return 0;
}

