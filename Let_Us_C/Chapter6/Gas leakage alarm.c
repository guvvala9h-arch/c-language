#include <stdio.h>

int main() {
    int gasValue;

    printf("Enter Gas Sensor Value: ");
    scanf("%d", &gasValue);

    if(gasValue > 500)
        printf("Buzzer ON - Gas Leak Detected\n");
    else
        printf("Safe Environment\n");

    return 0;
}
