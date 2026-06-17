#include <stdio.h>

int main() {
    int cardID;

    printf("Enter RFID Card ID: ");
    scanf("%d", &cardID);

    if(cardID == 1234)
        printf("Access Granted\n");
    else
        printf("Access Denied\n");

    return 0;
}
