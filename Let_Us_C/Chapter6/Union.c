#include <stdio.h>

// Define union
union Data {
    int i;
    float f;
    char str[20];
};

int main() {
    union Data d;

    d.i = 10;
    printf("Integer: %d\n", d.i);

    d.f = 3.14;
    printf("Float: %.2f\n", d.f);

    // Now string overwrites previous values
    sprintf(d.str, "Hello");
    printf("String: %s\n", d.str);

    return 0;
}
