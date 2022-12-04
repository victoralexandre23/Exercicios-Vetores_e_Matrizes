#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int diagonalP=0, diagonalS=0, tam=5;
    int matriz[tam][tam];

    printf("Digite o tamanho da matriz(entre 1 e 5):");
    scanf("%d", &tam);

    srand(time(NULL));

    //Gera uma matriz aleatoria
    for (int i = 0; i < tam; ++i){
        for (int j = 0; j < tam; ++j) {
            matriz[i][j]=rand()%10;
        }
    }

    //Imprime a matriz
    for (int i = 0; i < tam; ++i) {
        putchar('\n');
        for (int j = 0; j < tam; ++j) {
            printf("%d  ", matriz[i][j]);
        }
    }
    printf("\n\n");

    //Soma a diagonal principal
    for (int i = 0; i < tam; i++) {
        diagonalP += matriz[i][i];
    }

    //Soma a diagonal secundaria
    int j=tam-1;
    for (int i = 0; i < tam; i++) {
        diagonalS += matriz[i][j];
        j--;
    }

    printf("Diagonal principal: %d\n", diagonalP);
    printf("Diagonal secundaria: %d\n", diagonalS);
    return 0;
}