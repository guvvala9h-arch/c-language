#include <stdio.h>

int main() {

    int currentFloor = 0;
    int targetFloor;

    while(1) {

        printf("Enter Target Floor: ");
        scanf("%d", &targetFloor);

        if(targetFloor > currentFloor) {
            printf("Moving Up\n");
        }
        else if(targetFloor < currentFloor) {
            printf("Moving Down\n");
        }
        else {
            printf("Already on Same Floor\n");
        }

        currentFloor = targetFloor;

        printf("Reached Floor %d\n", currentFloor);
        printf("----------------------\n");
    }

    return 0;
}
