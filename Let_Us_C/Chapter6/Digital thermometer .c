#include <stdio.h>

int main() {
    float temp;

    printf("Enter Body Temperature: ");
    scanf("%f", &temp);

    if(temp > 37.5)
        printf("Fever Detected\n");
    else
        printf("Temperature Normal\n");

    return 0;
}
