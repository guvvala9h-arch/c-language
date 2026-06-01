#include <stdio.h>
#include <math.h>

int main() {
    float m, k, T;

    printf("Enter mass: ");
    scanf("%f", &m);

    printf("Enter spring constant: ");
    scanf("%f", &k);

    T = 2 * 3.14 * sqrt(m / k);

    printf("Time period = %.2f sec", T);

    return 0;
}
