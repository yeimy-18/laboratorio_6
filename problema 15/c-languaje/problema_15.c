#include <stdio.h>

int main() {
    int matriz[5][5] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {11, 12, 13, 14, 15}, {16, 17, 18, 19, 20}, {21, 22, 23, 24, 25}};
    int contadorPares = 0, contadorImpares = 0;
    int i, j;

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (matriz[i][j] % 2 == 0) {
                contadorPares++;
            } else {
                contadorImpares++;
            }
        }
    }

    printf("Cantidad de números pares: %d\n", contadorPares);
    printf("Cantidad de números impares: %d\n", contadorImpares);

    return 0;
}