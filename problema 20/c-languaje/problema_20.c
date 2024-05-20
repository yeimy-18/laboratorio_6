#include <stdio.h>

void matrixInput(int mat[][10], int row, int col) {
    printf("Enter matrix elements:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
}

void matrixMultiply(int mat1[][10], int mat2[][10], int res[][10], int r1, int c1, int r2, int c2) {
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            res[i][j] = 0;
            for (int k = 0; k < c1; k++) {
                res[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

void printMatrix(int mat[][10], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int mat1[10][10], mat2[10][10], res[10][10];
    int r1, c1, r2, c2;

    printf("Enter rows and columns for first matrix: ");
    scanf("%d %d", &r1, &c1);
    matrixInput(mat1, r1, c1);

    printf("Enter rows and columns for second matrix: ");
    scanf("%d %d", &r2, &c2);
    if (c1 != r2) {
        printf("Matrices are not conformable.\n");
        return 0;
    }
    matrixInput(mat2, r2, c2);

    matrixMultiply(mat1, mat2, res, r1, c1, r2, c2);
    printf("Resultant Matrix:\n");
    printMatrix(res, r1, c2);

    return 0;
}