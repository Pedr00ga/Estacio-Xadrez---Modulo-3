#include <stdio.h>

int main(){


// Define qual peça do xadrez vai se moer
int opcoes = 5;
int casaTorre = 4;
int casaBispo = 4;
int casaRainha = 7;
int casaCavaloH = 0;
int casaCavaloP = 1;
int i = 0;
int j = 0;


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

                printf("Cima\n");
                printf("Direita\n");
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

case 4:

    for (int i = 0 ; i <= casaCavaloH; i++){
        for (int j = 0; j <= casaCavaloP; j++){
            if (j <= casaCavaloP){
            printf("Baixo\n");
        }
    }
        if (i <= casaCavaloH){
            printf("Esquerda\n");
        }
    }

break;

case 5:

    while (i <= casaCavaloH){
        while (j <= casaCavaloP){
            if (j <= casaCavaloP){
                printf("Baixo\n");
                j++;
            }
        } if (i <= casaCavaloH){
            printf("Esquerda\n");
            i++;
        }
    }
break;
}
}