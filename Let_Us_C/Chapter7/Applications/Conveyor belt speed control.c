#include <stdio.h>

int main() {
    int speed;

    printf("Enter conveyor belt speed: ");
    scanf("%d", &speed);

    if(speed < 50)
        printf("Increase Motor Speed\n");
    else if(speed > 100)
        printf("Reduce Motor Speed\n");
    else
        printf("Speed is Stable\n");

    return 0;
}
