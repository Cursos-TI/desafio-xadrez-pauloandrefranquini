#include <stdio.h>

// Função recursiva que simula o movimento da torre
void movimento_torre(int i) {
    if (i < 5) { // A torre se move 5 vezes para a direita
        printf("Direita\n");
        i++; // Incrementa a posição
        movimento_torre(i); // Chama a função recursivamente para continuar o movimento
    }
}

// Função recursiva que simula o movimento da rainha
void movimento_rainha(int i) {
    if (i < 8) { // A rainha se move 8 vezes para a esquerda
        printf("Esquerda\n");
        i++; // Incrementa a posição
        movimento_rainha(i); // Chama a função recursivamente para continuar o movimento
    }
}

// Função recursiva que simula o movimento do bispo
void movimento_bispo(int i) {
    if (i < 5) { // O bispo se move 5 vezes na diagonal superior direita
        printf("Cima, direita\n");
        i++; // Incrementa a posição
        movimento_bispo(i); // Chama a função recursivamente para continuar o movimento
    }
}

// Função que simula o movimento do cavalo utilizando loop com múltiplas variáveis
void movimento_cavalo() {
    // O cavalo segue um movimento padrão: duas vezes para cima e uma vez para a direita
    for (int i = 0; i < 3; i++) {  
        if (i < 2) { 
            printf("Cima\n"); // Primeiro, move-se para cima duas vezes
        } else { 
            printf("Direita\n"); // Depois, move-se uma vez para a direita
        }
    }
}

// Função principal
int main() {
    // Inicializa variáveis de controle para cada peça
    int i = 0;
    movimento_torre(i); // Executa o movimento da torre

    int j = 0;
    movimento_rainha(j); // Executa o movimento da rainha

    int k = 0;
    movimento_bispo(k); // Executa o movimento do bispo

    movimento_cavalo(); // Executa o movimento do cavalo

    return 0;
}
