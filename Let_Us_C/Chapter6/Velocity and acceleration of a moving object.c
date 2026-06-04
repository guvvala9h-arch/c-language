#include <stdio.h>

int main() {
    float u, v, t, a;

    printf("Enter initial velocity: ");
    scanf("%f", &u);

    printf("Enter final velocity: ");
    scanf("%f", &v);

    printf("Enter time: ");
    scanf("%f", &t);

    a = (v - u) / t;

    printf("Acceleration = %.2f m/s^2", a);

    return 0;
}
