#include <stdio.h>

int main() {
    float humidity;

    printf("Enter humidity percentage: ");
    scanf("%f", &humidity);

    if(humidity > 70)
        printf("High Humidity\n");
    else
        printf("Humidity Normal\n");

    return 0;
}
