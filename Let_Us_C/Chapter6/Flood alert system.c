#include <stdio.h>

int main() {
    int waterLevel;

    printf("Enter river level (cm): ");
    scanf("%d", &waterLevel);

    if(waterLevel > 500)
        printf("Flood Warning!\n");
    else
        printf("Water Level Safe\n");

    return 0;
}
