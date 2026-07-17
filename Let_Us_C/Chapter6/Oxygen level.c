#include <stdio.h>

int main() {
    int level;

    printf("Enter Oxygen Level (%%): ");
    scanf("%d",&level);

    if(level < 20)
        printf("Refill Cylinder\n");
    else
        printf("Oxygen Level Sufficient\n");

    return 0;
}
