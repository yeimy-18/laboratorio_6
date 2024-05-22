#include <stdio.h>

int main() {
    int vector[10];
    int i, temp;

    // Lectura de los elementos del vector
    printf("Ingrese 10 elementos para el vector:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &vector[i]);
    }

    // Intercambio de elementos
    for (i = 0; i < 5; i++) {
        temp = vector[i];
        vector[i] = vector[9 - i];
        vector[9 - i] = temp;
    }

    // Impresión del vector modificado
    printf("Vector modificado:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", vector[i]);
    }
    printf("\n");

    return 0;
}