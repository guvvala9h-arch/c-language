#include <stdio.h>

int main() {
    int gasLevel;

    printf("Enter gas sensor value: ");
    scanf("%d", &gasLevel);

    if(gasLevel > 500)
        printf("Gas Leak Detected!\n");
    else
        printf("Safe Environment\n");

    return 0;
}
