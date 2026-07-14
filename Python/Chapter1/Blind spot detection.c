#include <stdio.h>

int main() {
    float distance;

    printf("Enter object distance (m): ");
    scanf("%f", &distance);

    if(distance < 2)
        printf("Vehicle in Blind Spot\n");
    else
        printf("Blind Spot Clear\n");

    return 0;
}
