#include <stdio.h>

int main() {
    int matriz[5][5];
    int i, j;
    int sum_pares = 0;
    long long prod_impares = 1;

    // Input elements of the matrix
    printf("Ingrese los elementos de la matriz (5x5):\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    // Calculate sum of even numbers and product of odd numbers
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (matriz[i][j] % 2 == 0) {
                sum_pares += matriz[i][j];
            } else {
                prod_impares *= matriz[i][j];
            }
        }
    }

    // Display the matrix
    printf("Matriz ingresada:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    // Display results
    printf("Suma de los numeros pares: %d\n", sum_pares);
    printf("Producto de los numeros impares: %lld\n", prod_impares);

    return 0;
}