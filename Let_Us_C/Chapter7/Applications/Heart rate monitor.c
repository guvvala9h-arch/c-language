#include <stdio.h>

int main() {
    int beats, time;
    float bpm;

    printf("Enter number of beats: ");
    scanf("%d", &beats);

    printf("Enter time (in seconds): ");
    scanf("%d", &time);

    bpm = (beats * 60.0) / time;

    printf("Heart Rate: %.2f BPM\n", bpm);

    if(bpm > 100)
        printf("High Heart Rate!\n");
    else if(bpm < 60)
        printf("Low Heart Rate!\n");
    else
        printf("Normal Heart Rate\n");

    return 0;
}
