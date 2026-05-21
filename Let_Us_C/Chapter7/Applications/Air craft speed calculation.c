#include <stdio.h>

int main() {
    float distance, time, speed;

    printf("Enter distance traveled (km): ");
    scanf("%f", &distance);

    printf("Enter time taken (hours): ");
    scanf("%f", &time);

    speed = distance / time;

    printf("Aircraft Speed = %.2f km/h\n", speed);

    return 0;
}
