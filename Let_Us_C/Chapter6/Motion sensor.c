#include <stdio.h>

int main() {
    int motion;

    printf("Enter motion status (1=Detected, 0=Not Detected): ");
    scanf("%d", &motion);

    if(motion)
        printf("Motion Detected!\n");
    else
        printf("No Motion\n");

    return 0;
}
