#include <stdio.h>

void movimento_torre(int i){
    if(i<5){
        printf("Direita\n");
        i++;
        movimento_torre(i);

    }
}

void movimento_rainha(int i){
    
    if(i<8){
        printf("Esquerda\n");
        i++;
        movimento_rainha(i);
    }
}

void movimento_bispo(int i){
    if(i<5){
        printf("Cima, direita\n");
        i++;
        movimento_bispo(i);
    }
}


void movimento_cavalo() {

    for (int i = 0; i < 3; i++) { 
        if (i < 2) {
            printf("Cima\n"); 
        } else {
            printf("Direita\n"); 
        }
    }

}



int main(){
    
    int i = 0;
    movimento_torre(i);

    int j = 0;
    movimento_rainha(j);

    int k = 0;
    movimento_bispo(k);

    movimento_cavalo();





    return 0;
}