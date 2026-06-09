#include <stdio.h>

int main() {
    int rain;

    printf("Enter rain sensor value: ");
    scanf("%d", &rain);

    if(rain > 500)
        printf("Rain Detected\n");
    else
        printf("No Rain\n");

    return 0;
}
