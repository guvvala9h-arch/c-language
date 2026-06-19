#include <stdio.h>

int main() {
    int tilt;

    printf("Enter tilt status (1=Tilted, 0=Normal): ");
    scanf("%d", &tilt);

    if(tilt)
        printf("Object Tilted\n");
    else
        printf("Object Stable\n");

    return 0;
}
