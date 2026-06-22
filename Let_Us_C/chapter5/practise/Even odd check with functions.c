#include <stdio.h>

// Function definition
int isEven(int num) {
    if (num % 2 == 0) {
        return 1; 
    }
    return 0;
}

int main() {
    int number = 7;
    if (isEven(number)) {
        printf("%d is even.\n", number);
    } else {
        printf("%d is odd.\n", number);
    }
    return 0;
}
