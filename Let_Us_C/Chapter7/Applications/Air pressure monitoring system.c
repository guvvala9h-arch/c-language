#include <stdio.h>

int main() {
    float pressure;

    printf("Enter cabin pressure: ");
    scanf("%f", &pressure);

    if(pressure < 75)
        printf("Low Cabin Pressure Warning!\n");
    else
        printf("Cabin Pressure Normal\n");

    return 0;
}
