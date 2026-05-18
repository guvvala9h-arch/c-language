#include <stdio.h>

int main() {
    char command;

    printf("Enter Command (F/B/L/R): ");
    scanf(" %c", &command);

    switch(command) {
        case 'F':
            printf("Robot Moving Forward\n");
            break;

        case 'B':
            printf("Robot Moving Backward\n");
            break;

        case 'L':
            printf("Robot Turning Left\n");
            break;

        case 'R':
            printf("Robot Turning Right\n");
            break;

        default:
            printf("Invalid Command\n");
    }

    return 0;
}
