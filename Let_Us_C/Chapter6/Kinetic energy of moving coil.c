#include <stdio.h>

int main() {
    float m, v, ke;

    printf("Enter mass: ");
    scanf("%f", &m);

    printf("Enter velocity: ");
    scanf("%f", &v);

    ke = 0.5 * m * v * v;

    printf("Kinetic Energy = %.2f J", ke);

    return 0;
}
