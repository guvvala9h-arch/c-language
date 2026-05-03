#include <stdio.h>

int main() {
    int choice;
    float balance = 1000, amount;

    printf("1. Deposit\n2. Withdraw\n3. Check Balance\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Enter amount: ");
            scanf("%f", &amount);
            balance += amount;
            printf("Updated Balance = %.2f", balance);
            break;

        case 2:
            printf("Enter amount: ");
            scanf("%f", &amount);
            if(amount <= balance) {
                balance -= amount;
                printf("Remaining Balance = %.2f", balance);
            } else {
                printf("Insufficient balance");
            }
            break;

        case 3:
            printf("Balance = %.2f", balance);
            break;

        default:
            printf("Invalid choice");
    }
    return 0;
}
