#include <stdio.h>

int main() {
    int heartRate;

    printf("Enter Heart Rate: ");
    scanf("%d", &heartRate);

    if(heartRate < 60 || heartRate > 100)
        printf("Abnormal Heart Rate\n");
    else
        printf("Normal Heart Rate\n");

    return 0;
}
