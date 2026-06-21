#include <stdio.h>

int main() {
    int spo2;

    printf("Enter SpO2 Percentage: ");
    scanf("%d", &spo2);

    if(spo2 < 95)
        printf("Low Oxygen Level\n");
    else
        printf("Oxygen Level Normal\n");

    return 0;
}
