#include <stdio.h>

int main() {
    float distance;

    printf("Enter distance from obstacle (cm): ");
    scanf("%f", &distance);

    if(distance < 10)
        printf("STOP!\n");
    else if(distance < 30)
        printf("Slow Down\n");
    else
        printf("Safe Distance\n");

    return 0;
}
