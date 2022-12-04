#include <stdio.h>

int main(){

    int matriz[3][2] = {
            {3, 1},
            {7, 5},
            {4, 8}
    };

    printf("Matriz A:");
    for (int i = 0; i < 3;i++){
        putchar('\n');
        for (int j = 0; j < 2;j++){
            printf("%d  ",matriz[i][j]);
        }
    }
    printf("\n\n");

    printf("Matriz A transposta:");
    for (int i = 0; i < 2;i++){
        putchar('\n');
        for (int j = 0; j < 3;j++){
            printf("%d  ",matriz[j][i]);
        }
    }

    return 0;
}
