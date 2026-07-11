#include <stdio.h>

int main() {
    float temp;

    printf("Enter Room Temperature: ");
    scanf("%f",&temp);

    if(temp > 30)
        printf("Fan ON\n");
    else
        printf("Fan OFF\n");

    return 0;
}
