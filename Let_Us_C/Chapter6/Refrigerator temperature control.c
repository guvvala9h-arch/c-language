#include <stdio.h>

int main() {
    float temp;

    printf("Enter Refrigerator Temperature: ");
    scanf("%f",&temp);

    if(temp > 8)
        printf("Cooling Required\n");
    else
        printf("Temperature Normal\n");

    return 0;
}
