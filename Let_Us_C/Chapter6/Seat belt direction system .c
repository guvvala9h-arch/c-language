#include <stdio.h>

int main() {
    int seatBelt;

    printf("Seat belt fastened? (1=Yes, 0=No): ");
    scanf("%d", &seatBelt);

    if(seatBelt)
        printf("Drive Safely\n");
    else
        printf("Warning! Fasten Seat Belt\n");

    return 0;
}
