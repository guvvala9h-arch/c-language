#include <stdio.h>

int main() {
    int touch;

    printf("Enter touch status (1=Touched, 0=Not Touched): ");
    scanf("%d", &touch);

    if(touch)
        printf("Touch Detected\n");
    else
        printf("No Touch\n");

    return 0;
}
