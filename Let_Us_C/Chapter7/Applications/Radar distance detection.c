#include <stdio.h>

int main() {
    float speedOfSignal = 300000; // km/s
    float time, distance;

    printf("Enter signal return time (seconds): ");
    scanf("%f", &time);

    distance = (speedOfSignal * time) / 2;

    printf("Object Distance = %.2f km\n", distance);

    return 0;
}
