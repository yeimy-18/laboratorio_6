#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int arreglo[5][5];
    int contador = 0;
    int i, j;

    // Inicializar la semilla para números aleatorios
    srand(time(NULL));

    // Llenar el arreglo y contar los ceros
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            arreglo[i][j] = rand() % 10;  // Números entre 0 y 9
            if (arreglo[i][j] == 0) {
                contador++;
            }
        }
    }

    // Mostrar el arreglo (opcional)
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%d ", arreglo[i][j]);
        }
        printf("\n");
    }

    // Mostrar el número de ceros
    printf("Número de ceros en el arreglo: %d\n", contador);

    return 0;
}