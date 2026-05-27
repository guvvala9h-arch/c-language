#include <stdio.h>

int main() {
    float battery, usage, remaining;

    printf("Enter total battery percentage: ");
    scanf("%f", &battery);

    printf("Enter battery used percentage: ");
    scanf("%f", &usage);

    remaining = battery - usage;

    printf("Remaining Battery = %.2f%%\n", remaining);

    return 0;
}
