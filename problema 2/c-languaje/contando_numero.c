#include <stdio.h>

int main() {
    int n = 0, count_10 = 0, count_100 = 0;
    int search_n, found, continue_search;


    //indicando el tamaño del arreglo
    do
    {
        printf("ingresa el tamaño del arreglo: ");
        scanf("%d", &n);
    } while (n < 1 || n > 20);
    int arreglo[n]; //creando el arreglo


    printf("ingresa %d números:\n", n);
    for ( int i = 0; i < n; i++){
        scanf("%d", &arreglo[i]);
        
        // Contar cuántos números son menores a 10 y mayores a 100
        if(arreglo[i] < 10) count_10++;
        if(arreglo[i] > 100) count_100++;
    }

    printf("Números menores que 10: %d\n", count_10);
    printf("Números mayores que 100: %d\n", count_100);

    do
    {
        printf("ingresa un número para buscar en el arreglo: ");
        scanf("%d", &search_n);
        found = 0;
        for (int i = 0; i < n; i++)
        {
            if (arreglo[i] == search_n)
            {
                printf("El número se encuentra en la posición %d\n", i + 1);
                found = 1;
                break;
            }
            
        }
        if(!found){
            printf("El número no se encuentra en la lista\n");
        }

        printf("¿Desea buscar otro número? (1 para sí, 0 para no): ");
        scanf("%d", &continue_search);

    } while (continue_search);
    
    
    
    return 0;
}

