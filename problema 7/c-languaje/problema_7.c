#include <stdio.h>

int main() {
    int matriz[5][5];
    int i, j;

    // Input elements of the matrix
    printf("Ingrese los elementos de la matriz (5x5):\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    // Display the matrix and find even numbers
    printf("Matriz ingresada:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%d\t", matriz[i][j]);
            if (matriz[i][j] % 2 == 0) {
                printf("(Par en posicion [%d][%d])\n", i, j);
            }
        }
        printf("\n");
    }

    return 0;
}