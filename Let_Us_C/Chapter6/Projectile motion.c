#include <stdio.h>
#include <math.h>

int main() {
    float u, angle, g = 9.8;
    float time, range;

    printf("Enter velocity: ");
    scanf("%f", &u);

    printf("Enter angle in degrees: ");
    scanf("%f", &angle);

    angle = angle * 3.14 / 180;

    time = (2 * u * sin(angle)) / g;
    range = (u * u * sin(2 * angle)) / g;

    printf("Time of flight = %.2f sec\n", time);
    printf("Range = %.2f m\n", range);

    return 0;
}
