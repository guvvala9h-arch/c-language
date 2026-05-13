#include <stdio.h>

int main() {
    float temperature;

    printf("Enter machine temperature: ");
    scanf("%f", &temperature);

    if(temperature > 80)
        printf("Warning! High Temperature Detected\n");
    else
        printf("Temperature is Normal\n");

    return 0;
}
