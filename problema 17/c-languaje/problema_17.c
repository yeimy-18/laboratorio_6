#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char texto[81];
    int longitud, i;
    int contador_vocales[5] = {0}; // a, e, i, o, u

    printf("Ingrese una linea de texto (máximo 80 caracteres): ");
    fgets(texto, 81, stdin);
    texto[strcspn(texto, "\n")] = 0; // Elimina el salto de línea

    longitud = strlen(texto);

    // Imprimir el texto al revés
    printf("Texto al revés: ");
    for (i = longitud - 1; i >= 0; i--) {
        printf("%c", texto[i]);
        char c = tolower(texto[i]);
        switch (c) {
            case 'a': contador_vocales[0]++; break;
            case 'e': contador_vocales[1]++; break;
            case 'i': contador_vocales[2]++; break;
            case 'o': contador_vocales[3]++; break;
            case 'u': contador_vocales[4]++; break;
        }
    }
    printf("\n");

    // Reportar el número de cada una de las vocales
    printf("Conteo de vocales:\n");
    printf("a: %d\n", contador_vocales[0]);
    printf("e: %d\n", contador_vocales[1]);
    printf("i: %d\n", contador_vocales[2]);
    printf("o: %d\n", contador_vocales[3]);
    printf("u: %d\n", contador_vocales[4]);

    return 0;
}