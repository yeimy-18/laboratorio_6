#include <stdio.h>

int epsilon(int i, int j, int k) {
    if ((i == 0 && j == 1 && k == 2) || (i == 1 && j == 2 && k == 0) || (i == 2 && j == 0 && k == 1))
        return 1;
    else if ((i == 2 && j == 1 && k == 0) || (i == 0 && j == 2 && k == 1) || (i == 1 && j == 0 && k == 2))
        return -1;
    else
        return 0;
}

void crossProduct(int u[3], int v[3], int result[3]) {
    for (int i = 0; i < 3; i++) {
        result[i] = 0;
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                result[i] += epsilon(i, j, k) * u[j] * v[k];
            }
        }
    }
}

int main() {
    int u[3] = {1, 2, 3};
    int v[3] = {4, 5, 6};
    int result[3];

    crossProduct(u, v, result);

    printf("Cross Product: [%d, %d, %d]\n", result[0], result[1], result[2]);
    return 0;
}