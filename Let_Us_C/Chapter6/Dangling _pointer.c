#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;

    // Allocate memory
    ptr = (int *)malloc(sizeof(int));

    // Assign value
    *ptr = 10;
    printf("Value before freeing: %d\n", *ptr);

    // Free the memory
    free(ptr);

    // Now ptr becomes a dangling pointer
    printf("Trying to access after free: %d\n", *ptr); // Undefined behavior

    return 0;
}
