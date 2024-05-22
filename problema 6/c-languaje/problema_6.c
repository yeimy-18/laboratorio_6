#include <stdio.h>
#include <limits.h>

int main() {
    int matriz[5][5];
    int i, j;
    int     n_menor = INT_MAX, n_mayor = INT_MIN;

    printf("Ingrese los elementos de la matriz:\n");
    for ( i = 0; i < 5; i++){
        for ( j = 0; j < 5; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    for ( i = 0; i < 5; i++){
        for ( j = 0; j < 5; j++){
            if (matriz[i][j] < n_menor) n_menor = matriz[i][j];
            if (matriz[i][j] > n_mayor) n_mayor = matriz[i][j];
        }    
    }

    printf("El numero menor de la matriz es: %d\n", n_menor);
    printf("El numero mayor de la matriz es: %d\n", n_mayor);

    return 0;
}
