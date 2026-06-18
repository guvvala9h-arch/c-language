#include <stdio.h>

int main() {
    int flame;

    printf("Enter flame status (1=Detected, 0=Not Detected): ");
    scanf("%d", &flame);

    if(flame)
        printf("Fire Detected!\n");
    else
        printf("No Fire\n");

    return 0;
}
