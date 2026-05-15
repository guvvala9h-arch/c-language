#include <stdio.h>

int main() {
    int shift;

    printf("Enter Shift Number (1/2/3): ");
    scanf("%d", &shift);

    switch(shift) {
        case 1:
            printf("Morning Shift\n");
            break;

        case 2:
            printf("Afternoon Shift\n");
            break;

        case 3:
            printf("Night Shift\n");
            break;

        default:
            printf("Invalid Shift\n");
    }

    return 0;
}
