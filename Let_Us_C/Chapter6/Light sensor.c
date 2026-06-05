#include <stdio.h>

int main() {
    int lightIntensity;

    printf("Enter light intensity: ");
    scanf("%d", &lightIntensity);

    if(lightIntensity < 300)
        printf("Street Light ON\n");
    else
        printf("Street Light OFF\n");

    return 0;
}
