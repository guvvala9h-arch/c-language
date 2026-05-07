#include <stdio.h>

// Simulated sensor inputs
int leftSensor, rightSensor;

void moveForward() {
    printf("Moving Forward\n");
}

void turnLeft() {
    printf("Turning Left\n");
}

void turnRight() {
    printf("Turning Right\n");
}

int main() {
    while(1) {
        printf("\nEnter Left Sensor (1/0): ");
        scanf("%d", &leftSensor);
        printf("Enter Right Sensor (1/0): ");
        scanf("%d", &rightSensor);

        if(leftSensor == 0 && rightSensor == 0)
            moveForward();
        else if(leftSensor == 1 && rightSensor == 0)
            turnLeft();
        else if(leftSensor == 0 && rightSensor == 1)
            turnRight();
        else
            printf("Stop\n");
    }
    return 0;
}
