#include <stdio.h>

int main() {
    char name[50];
    int seats;

    printf("Enter passenger name: ");
    scanf("%s", name);

    printf("Enter number of seats: ");
    scanf("%d", &seats);

    printf("\nTicket Reserved Successfully\n");
    printf("Passenger Name: %s\n", name);
    printf("Seats Booked: %d\n", seats);

    return 0;
}
