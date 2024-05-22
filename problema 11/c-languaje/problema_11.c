#include <stdio.h>

int main() {
    int vector[20];
    int indice1, indice2, suma = 0;

    // Solicitar los 20 números
    for (int i = 0; i < 20; i++) {
        printf("Ingrese el elemento %d del vector: ", i + 1);
        scanf("%d", &vector[i]);
    }

    // Solicitar los índices
    printf("Ingrese dos números entre 1 y 20 (índices): ");
    scanf("%d %d", &indice1, &indice2);

    // Validar los índices
    while (indice1 < 1 || indice1 > 20 || indice2 < 1 || indice2 > 20 || indice2 <= indice1) {
        printf("Error: Ingrese dos números válidos (1-20), donde el segundo sea mayor al primero: ");
        scanf("%d %d", &indice1, &indice2);
    }

    // Calcular la suma
    for (int i = indice1 - 1; i < indice2; i++) {
        suma += vector[i];
    }

    // Mostrar el vector original
    printf("El arreglo original es:\n");
    for (int i = 0; i < 20; i++) {
        printf("%d ", vector[i]);
    }
    printf("\n");

    // Mostrar la suma
    printf("La suma de los elementos entre los índices %d y %d es: %d\n", indice1, indice2, suma);

    return 0;
}