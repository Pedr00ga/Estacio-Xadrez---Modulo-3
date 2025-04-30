#include <stdio.h>

void movimentoTorre(int casaTorre, int i){
    do{
        if (i <= casaTorre){
            printf("Direita\n");
            i++;
        }
    }while (i <= casaTorre);
}

void movimentoBispo(int casaBispoC, int casaBispoD){
    for (int i = 0; i < casaBispoC; i++){
        printf("Cima\n");
        for (int j = 0; j < casaBispoD; j++){
            printf("Direita\n");
            break;
        }
    }
}
        

void movimentoRainha(int casaRainha, int i){
    while (i<= casaRainha){
        if (i <= casaRainha){
            printf("Esquerda\n");
            i++;
        }
    }
}

void movimentoCavalo(int casaCavaloH, int casaCavaloP, int i, int j){

    while (i <= casaCavaloH){
        while (j <= casaCavaloP){
            if (j <= casaCavaloP){
                printf("Cima\n");
                j++;
            }
        } if (i <= casaCavaloH){
            printf("Direita\n");
            i++;
        }
        break;
    }
}


int main(){


// Define qual peça do xadrez vai se moer
int opcoes = 4;
int casaTorre = 4;
int casaBispoC = 5;
int casaBispoD = 5;
int casaRainha = 7;
int casaCavaloH = 0;
int casaCavaloP = 1;
int i = 0;
int j = 0;


switch(opcoes){
case 1:

    // Define o movimento para direita da torre
    movimentoTorre(casaTorre, i);
    return 0;

case 2:

    // Define o movimento na diagonal para o bispo
    movimentoBispo(casaBispoC, casaBispoD);
    return 0;


case 3:

    //Define movimento da rainha
    movimentoRainha(casaRainha, i);
    return 0;

case 4:

    // Define o movimento do cavalo
    movimentoCavalo(casaCavaloH, casaCavaloP, i, j);
    return 0;
}
}