#include <stdio.h>

int main() {
    float pressure;

    printf("Enter Pressure Value: ");
    scanf("%f", &pressure);

    if(pressure > 120)
        printf("Danger: High Pressure\n");
    else
        printf("Pressure Normal\n");

    return 0;
}
