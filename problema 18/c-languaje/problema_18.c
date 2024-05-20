#include <stdio.h>

int main() {
    // Declare the vectors u and v
    int u[3] = {2, 4, -5};
    int v[3] = {-3, -2, 1};
    
    // Calculate the cross product components
    int cross_product[3];
    cross_product[0] = u[1] * v[2] - v[1] * u[2];  // u2*v3 - v2*u3
    cross_product[1] = -(u[0] * v[2] - v[0] * u[2]); // -(u1*v3 - v1*u3)
    cross_product[2] = u[0] * v[1] - v[0] * u[1];  // u1*v2 - v1*u1

    // Output the result
    printf("Cross product: (%d, %d, %d)\n", cross_product[0], cross_product[1], cross_product[2]);

    return 0;
}