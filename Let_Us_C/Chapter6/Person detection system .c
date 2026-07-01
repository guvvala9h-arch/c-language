#include <stdio.h>

int main() {
    int personDetected;

    printf("Person Detected? (1/0): ");
    scanf("%d", &personDetected);

    if(personDetected)
        printf("Door Opened\n");
    else
        printf("Door Closed\n");

    return 0;
}
