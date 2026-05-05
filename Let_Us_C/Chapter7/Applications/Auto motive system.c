#include <stdio.h>

#define MAX_TEMP 100

void checkEngineTemp(int temp) {
    if(temp > MAX_TEMP) {
        printf("WARNING: Engine Overheating!\n");
    } else {
        printf("Engine Temperature Normal\n");
    }
}

int main() {
    int temp;

    while(1) {
        printf("Enter Engine Temp: ");
        scanf("%d", &temp);

        checkEngineTemp(temp);
    }

    return 0;
}
