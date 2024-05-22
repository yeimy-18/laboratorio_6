#include <stdio.h>
#include <string.h>

void ordenarPorPromedio(char nombres[][50], float promedios[], int N) {
    int i, j;
    for (i = 0; i < N - 1; i++) {
        for (j = 0; j < N - 1 - i; j++) {
            if (promedios[j] < promedios[j + 1]) {
                float tempPromedio = promedios[j];
                promedios[j] = promedios[j + 1];
                promedios[j + 1] = tempPromedio;
                
                char tempNombre[50];
                strcpy(tempNombre, nombres[j]);
                strcpy(nombres[j], nombres[j + 1]);
                strcpy(nombres[j + 1], tempNombre);
            }
        }
    }
}

int main() {
    int N, i;
    printf("Ingrese el número de alumnos: ");
    scanf("%d", &N);
    char nombres[N][50];
    float promedios[N];

    for (i = 0; i < N; i++) {
        printf("Ingrese el nombre del alumno %d: ", i + 1);
        scanf("%s", nombres[i]);
        printf("Ingrese el promedio de %s: ", nombres[i]);
        scanf("%f", &promedios[i]);
    }

    ordenarPorPromedio(nombres, promedios, N);

    printf("\nAlumnos ordenados por promedio:\n");
    for (i = 0; i < N; i++) {
        printf("%s: %.2f\n", nombres[i], promedios[i]);
    }

    return 0;
}