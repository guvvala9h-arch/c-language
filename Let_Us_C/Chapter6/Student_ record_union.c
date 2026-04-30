#include <stdio.h>

union Info {
    int roll;
    float marks;
};

int main() {
    union Info s;

    s.roll = 101;
    printf("Roll Number: %d\n", s.roll);

    s.marks = 89.5;
    printf("Marks: %.2f\n", s.marks);

    return 0;
}
