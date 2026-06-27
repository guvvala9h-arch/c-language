#include <stdio.h>

int main() {
    float speed;

    printf("Enter Vehicle Speed: ");
    scanf("%f", &speed);

    if(speed > 80)
        printf("Overspeed Warning\n");
    else
        printf("Speed Within Limit\n");

    return 0;
}
