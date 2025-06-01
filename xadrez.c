#include <stdio.h>

void movimento_torre(){
    printf(" Movimento da torre\n");
    
    for(int i = 0; i < 5; i++){
        printf("Direita\n");
    }
}


void movimento_rainha(){
    printf(" Movimento da rainha\n");

    int i = 0;
    while( i < 8){
        printf("Esquerda\n");
        i++ ;
    }

}

void movimento_bispo(){
    printf(" Movimento do bispo\n");

    int i = 0;
    do
    {
        printf("Cima, direita\n");
        i++;
    } while (i < 5);
}


void movimento_cavalo(){
    printf("\nMovimento do cavalo\n");
    
    int j = 0; 
  
    while (j < 1){
            for(int i = 0; i < 2; i ++){
                printf("Cima\n");
            } 
         printf("Direita\n");
        j ++ ;   
    }
}



int main() {
    
    movimento_torre();

    movimento_rainha();

    movimento_bispo();

    movimento_cavalo();


    return 0;
}
