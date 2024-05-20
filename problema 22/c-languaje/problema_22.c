#include <stdio.h>
#include <stdlib.h>

void sort(int arr[], int n, int ascending) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if ((ascending && arr[j] > arr[j + 1]) || (!ascending && arr[j] < arr[j + 1])) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;
    printf("Ingrese el tamaño del arreglo (entre 20 y 50): ");
    scanf("%d", &n);

    if (n < 20 || n > 50) {
        printf("Error: el arreglo debe ser de entre 20 y 50 elementos.\n");
        return 1;
    }

    int *arr = (int *)malloc(n * sizeof(int));
    printf("Ingrese %d elementos:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    sort(arr, n, 1); // Sort ascending
    printf("Arreglo ordenado de menor a mayor:\n");
    printArray(arr, n);

    sort(arr, n, 0); // Sort descending
    printf("Arreglo ordenado de mayor a menor:\n");
    printArray(arr, n);

    free(arr);
    return 0;
}