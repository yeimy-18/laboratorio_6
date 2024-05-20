#include <stdio.h>

void printMatrix(double **matrix, int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%.1f ", matrix[i][j]);
        }
        printf("\n");
    }
}

void reverseRows(double **matrix, int m, int n) {
    for (int i = 0; i < m / 2; i++) {
        for (int j = 0; j < n; j++) {
            double temp = matrix[i][j];
            matrix[i][j] = matrix[m - i - 1][j];
            matrix[m - i - 1][j] = temp;
        }
    }
}

void modifyRows(double **matrix, int m, int n) {
    double **tempMatrix = (double **)malloc(m * sizeof(double *));
    for (int i = 0; i < m; i++) {
        tempMatrix[i] = (double *)malloc(n * sizeof(double));
        for (int j = 0; j < n; j++) {
            tempMatrix[i][j] = m * matrix[i][j] + i * matrix[m - 1][j];
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            matrix[i][j] = tempMatrix[i][j];
        }
    }
    for (int i = 0; i < m; i++) {
        free(tempMatrix[i]);
    }
    free(tempMatrix);
}

int main() {
    int m, n;
    printf("Enter the number of rows (m): ");
    scanf("%d", &m);
    printf("Enter the number of columns (n): ");
    scanf("%d", &n);

    double **matrix = (double **)malloc(m * sizeof(double *));
    for (int i = 0; i < m; i++) {
        matrix[i] = (double *)malloc(n * sizeof(double));
        printf("Enter elements of row %d: ", i + 1);
        for (int j = 0; j < n; j++) {
            scanf("%lf", &matrix[i][j]);
        }
    }

    printf("Original Matrix:\n");
    printMatrix(matrix, m, n);

    reverseRows(matrix, m, n);
    printf("Matrix after reversing rows:\n");
    printMatrix(matrix, m, n);

    modifyRows(matrix, m, n);
    printf("Matrix after modifying rows:\n");
    printMatrix(matrix, m, n);

    for (int i = 0; i < m; i++) {
        free(matrix[i]);
    }
    free(matrix);

    return 0;
}