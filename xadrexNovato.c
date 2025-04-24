#include <stdio.h>

int main(){


// Define qual peça do xadrez vai se moer
int opcoes = 1;
int casaTorre = 4;
int casaBispo = 4;
int casaRainha = 7;
int i = 0;

switch(opcoes){
case 1:

    // Define o movimento para direita da torre
    do{
        if (i <= casaTorre){
            printf("Direita\n");
            i++;
        }
    }while (i <= casaTorre);
        return 0;
    
break;

case 2:

    // Define o movimento na diagonal para o bispo
    for (int i = 0; i <= casaBispo; i++){
        for (int j = 0; j <= 5; j++){
            if (i + j == casaBispo){
                printf("Cima\n");
            }if (i + j == casaBispo){
                printf("Direita\n");
            }
        }
    }
break;

case 3:

    while (i<= casaRainha){
        if (i <= casaRainha){
            printf("Esquerda\n");
            i++;
        }
    }
break;
}

}