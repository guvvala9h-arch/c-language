#include <stdio.h>

int main() {
    int id;

    printf("Enter Fingerprint ID: ");
    scanf("%d", &id);

    if(id == 101)
        printf("Attendance Marked\n");
    else
        printf("User Not Found\n");

    return 0;
}
