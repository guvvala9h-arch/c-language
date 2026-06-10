#include <stdio.h>

int main() {
    int smokeLevel;

    printf("Enter smoke level: ");
    scanf("%d", &smokeLevel);

    if(smokeLevel > 400)
        printf("Fire Alert!\n");
    else
        printf("Safe Environment\n");

    return 0;
}
