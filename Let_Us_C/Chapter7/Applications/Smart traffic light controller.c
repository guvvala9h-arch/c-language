#include <stdio.h>
#include <unistd.h>

void red() {
    printf("RED Light ON\n");
}

void yellow() {
    printf("YELLOW Light ON\n");
}

void green() {
    printf("GREEN Light ON\n");
}

int main() {

    while(1) {

        green();
        sleep(5);

        yellow();
        sleep(2);

        red();
        sleep(5);

        printf("-------------------\n");
    }

    return 0;
}
