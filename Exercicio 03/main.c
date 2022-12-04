#include <stdio.h>

int main(){

    int oposta=0;
    int mat1[3][3] = {
            {-7, 5, 6},
            {9, -4, -8},
            {0, -4, 7}
    }, mat2[3][3] = {
            {7, -5, -6},
            {-9, 4, 8},
            {0, 4, -7}
    };

    //Imprime a matriz 01
    printf("Matriz 01:");
    for (int i = 0; i < 3; ++i) {
        putchar('\n');
        for (int j = 0; j < 3; ++j) {
            printf("%d  ", mat1[i][j]);
        }
    }
    printf("\n\n");

    //Imprime a matriz 02
    printf("Matriz 02:");
    for (int i = 0; i < 3; ++i) {
        putchar('\n');
        for (int j = 0; j < 3; ++j) {
            printf("%d  ", mat2[i][j]);
        }
    }
    printf("\n\n");

    //Analisa as matrizes e diz se são opostas
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            oposta = mat1[i][j] == (mat2[i][j])*-1;
            if (!oposta){
                break;
            }
        }
        if (!oposta){
            break;
        }
    }

    if (oposta){
        printf("As matrizes 01 e 02 são opostas\n");
    } else {
        printf("As matrizes 01 e 02 não são opostas\n");
    }

    return 0;
}