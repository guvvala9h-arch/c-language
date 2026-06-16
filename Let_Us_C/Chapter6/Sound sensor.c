#include <stdio.h>

int main() {
    int sound;

    printf("Enter sound level: ");
    scanf("%d", &sound);

    if(sound > 80)
        printf("High Noise Detected\n");
    else
        printf("Noise Level Normal\n");

    return 0;
}
