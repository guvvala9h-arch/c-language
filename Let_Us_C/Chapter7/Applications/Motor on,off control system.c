#include <stdio.h>

int main() {
    int choice;

    printf("1. ON Motor\n2. OFF Motor\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    if(choice == 1)
        printf("Motor Started\n");
    else if(choice == 2)
        printf("Motor Stopped\n");
    else
        printf("Invalid Input\n");

    return 0;
}
