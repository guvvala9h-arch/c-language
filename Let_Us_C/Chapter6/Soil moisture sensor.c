#include <stdio.h>

int main() {
    int moisture;

    printf("Enter soil moisture value: ");
    scanf("%d", &moisture);

    if(moisture < 300)
        printf("Motor ON - Watering Plants\n");
    else
        printf("Motor OFF\n");

    return 0;
}
