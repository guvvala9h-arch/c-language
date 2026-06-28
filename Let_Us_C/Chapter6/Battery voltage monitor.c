#include <stdio.h>

int main() {
    float voltage;

    printf("Enter Battery Voltage: ");
    scanf("%f", &voltage);

    if(voltage < 11.0)
        printf("Battery Low\n");
    else
        printf("Battery Healthy\n");

    return 0;
} 
