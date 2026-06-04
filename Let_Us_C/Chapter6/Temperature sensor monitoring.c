#include <stdio.h>

int main() {
    float temp;

    printf("Enter temperature: ");
    scanf("%f", &temp);

    if(temp > 40)
        printf("High Temperature Alert!\n");
    else
        printf("Temperature Normal\n");

    return 0;
}
