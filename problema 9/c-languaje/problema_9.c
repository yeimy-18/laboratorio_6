#include <stdio.h>

int main() {
    int matriz[5][5];
    int transpuesta[5][5];
    int i, j;

    // Input elements of the matrix
    printf("Ingrese los elementos de la matriz (5x5):\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    // Compute the transpose of the matrix
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            transpuesta[j][i] = matriz[i][j];
        }
    }

    // Display the original matrix
    printf("Matriz original:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    // Display the transposed matrix
    printf("Matriz transpuesta:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%d\t", transpuesta[i][j]);
        }
        printf("\n");
    }

    return 0;
}