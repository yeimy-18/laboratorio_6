#include <stdio.h>

int main() {
    int numeros[50], n_0 = 0, n_1 = 0, n_2 = 0, n_3 = 0, n_4 = 0, n_5 = 0, n_6 = 0, n_7 = 0, n_8 = 0, n_9 = 0;
    int i;

    printf("Ingrese 50 números entre 0 y 9:\n");
    for (i = 0; i < 50; i++) {
        scanf("%d", &numeros[i]); 
        if (numeros[i] < 0 || numeros[i] > 9) { 
            printf("El número %d no está entre el rango o no es válido. Por favor, ingresa un número entre 0 y 9\n", numeros[i]);
            i--; 
            continue; 
        }

        switch (numeros[i]) {
        case 0:
            n_0++;
            break;
        case 1:
            n_1++;
            break;
        case 2:
            n_2++;
            break;
        case 3: 
            n_3++;
            break;
        case 4:
            n_4++;
            break;
        case 5:
            n_5++;
            break;
        case 6:
            n_6++;
            break;
        case 7:
            n_7++;
            break;
        case 8:
            n_8++;
            break;
        case 9:
            n_9++;
            break;
        }
    }

    // Imprimir la frecuencia de cada número después de terminar el bucle
    printf("Frecuencia de los números:\n");
    printf("0: %d\n", n_0);
    printf("1: %d\n", n_1);
    printf("2: %d\n", n_2);
    printf("3: %d\n", n_3);
    printf("4: %d\n", n_4);
    printf("5: %d\n", n_5);
    printf("6: %d\n", n_6);
    printf("7: %d\n", n_7);
    printf("8: %d\n", n_8);
    printf("9: %d\n", n_9);

    return 0;
}

