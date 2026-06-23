#include <stdio.h>

int main() {
    float temp, humidity;

    printf("Enter Temperature: ");
    scanf("%f", &temp);

    printf("Enter Humidity: ");
    scanf("%f", &humidity);

    if(temp > 35 && humidity > 70)
        printf("Hot and Humid Weather\n");
    else
        printf("Normal Conditions\n");

    return 0;
}
