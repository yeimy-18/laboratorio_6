#include <stdio.h>

int main() {
    int m, n, i, j;
    printf("Ingrese el número de filas de la matriz: ");
    scanf("%d", &m);
    printf("Ingrese el número de columnas de la matriz: ");
    scanf("%d", &n);

    int A[m][n];
    double row_results[m][2]; // Almacena suma y promedio de cada fila
    double col_results[n][2]; // Almacena suma y promedio de cada columna

    // Leer los elementos de la matriz
    printf("Ingrese los elementos de la matriz:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Calcular suma y promedio de cada fila
    for (i = 0; i < m; i++) {
        double sum = 0;
        for (j = 0; j < n; j++) {
            sum += A[i][j];
        }
        row_results[i][0] = sum;
        row_results[i][1] = sum / n;
    }

    // Calcular suma y promedio de cada columna
    for (j = 0; j < n; j++) {
        double sum = 0;
        for (i = 0; i < m; i++) {
            sum += A[i][j];
        }
        col_results[j][0] = sum;
        col_results[j][1] = sum / m;
    }

    // Imprimir resultados de las filas
    printf("Suma y promedio por filas:\n");
    for (i = 0; i < m; i++) {
        printf("%.0f %.6f\n", row_results[i][0], row_results[i][1]);
    }

    // Imprimir resultados de las columnas
    printf("Suma y promedio por columnas:\n");
    for (j = 0; j < n; j++) {
        printf("%.0f %.6f\n", col_results[j][0], col_results[j][1]);
    }

    return 0;
}