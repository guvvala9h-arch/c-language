#include <stdio.h>

int main() {
    int vibration;

    printf("Enter vibration level: ");
    scanf("%d", &vibration);

    if(vibration > 50)
        printf("Vibration Alert!\n");
    else
        printf("Normal Condition\n");

    return 0;
}
