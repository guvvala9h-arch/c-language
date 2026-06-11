#include <stdio.h>

int main() {
    int obstacle;

    printf("Enter sensor status (1=Obstacle, 0=No Obstacle): ");
    scanf("%d", &obstacle);

    if(obstacle)
        printf("Obstacle Detected\n");
    else
        printf("Path Clear\n");

    return 0;
}
