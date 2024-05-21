#include <stdio.h>

int main() {
    int matriz[4][5];
    int i, j, numero, encontrado = 0;

    printf("Ingrese los elementos de la matriz de 4x5:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 5; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nMatriz ingresada:\n");
    for (i = 0; i <= 4; i++) {
        for (j = 0; j <= 5; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    printf("Ingrese un número a buscar en la matriz: ");
    scanf("%d", &numero);
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 5; j++) {
            if (matriz[i][j] == numero) {
                encontrado = 1;
                break;
            }
        }
        if (encontrado) break;
    }

    if (encontrado) {
        printf("Número encontrado en la matriz.\n");
    } else {
        printf("Número no encontrado.\n");
    }

    return 0;
}
