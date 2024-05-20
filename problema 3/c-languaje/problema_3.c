#include <stdio.h>

int main() {
    int numero[10],i, suma = 0;
    float promedio = 0;

    //calculando la suma de los arrays
    for ( i = 0; i < 10; i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d", &numero[i]);

        suma += numero[i];
    }

    printf("Suma de los numeros ingresados: %d\n", suma);

    //calculando el promedio
    promedio = suma/10.00;
    printf("Promedio de los numeros ingresados: %.2f\n", promedio);
    return 0;
}