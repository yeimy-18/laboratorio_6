#include <stdio.h>

int main() {
    int matriz1[12][12], matriz2[12][12];
    int i, j;
    int sonIguales = 1;  // Verdadero

    // Leer las matrices
    printf("Ingrese los elementos de la primera matriz:\n");
    for (i = 0; i < 12; i++) {
        for (j = 0; j < 12; j++) {
            scanf("%d", &matriz1[i][j]);
        }
    }

    printf("Ingrese los elementos de la segunda matriz:\n");
    for (i = 0; i < 12; i++) {
        for (j = 0; j < 12; j++) {
            scanf("%d", &matriz2[i][j]);
        }
    }

    // Comparar las diagonales principales
    for (i = 0; i < 12; i++) {
        if (matriz1[i][i] != matriz2[i][i]) {
            sonIguales = 0;  // Falso
            break;
        }
    }

    if (sonIguales) {
        printf("Las diagonales principales son iguales.\n");
    } else {
        printf("Las diagonales principales no son iguales.\n");
    }

    return 0;
}