#include <stdio.h>

int main() {
    int bpm;

    printf("Enter Heart Rate (BPM): ");
    scanf("%d", &bpm);

    if(bpm < 60)
        printf("Low Heart Rate\n");
    else if(bpm > 100)
        printf("High Heart Rate\n");
    else
        printf("Normal Heart Rate\n");

    return 0;
}
