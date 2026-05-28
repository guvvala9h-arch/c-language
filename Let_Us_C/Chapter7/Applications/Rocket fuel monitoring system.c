#include <stdio.h>

int main() {
    float fuel, rate, time, remaining;

    printf("Enter initial fuel (liters): ");
    scanf("%f", &fuel);

    printf("Enter fuel consumption rate (liters/hour): ");
    scanf("%f", &rate);

    printf("Enter flight time (hours): ");
    scanf("%f", &time);

    remaining = fuel - (rate * time);

    printf("Remaining Fuel = %.2f liters\n", remaining);

    return 0;
}
