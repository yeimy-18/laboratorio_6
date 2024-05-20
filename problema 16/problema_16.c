#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c, c2;
    int lados[3]; // Arreglo para almacenar los lados del triángulo

    //calcular los lados de las ternas
        for ( a = 1; a <= 500; a++){
            for ( b = a; b <= 500; b++){
                c2 = a * a + b * b;
                c = sqrt(c2);
                if (c *c == c2 && c<= 500){
                    lados[0] = a;
                    lados[1] = b;
                    lados[2] = c;
                    printf("las ternas son: %d, %d, %d\n", lados[0], lados[1], lados[2]);
            }
        }
        return 0;
    }
}
