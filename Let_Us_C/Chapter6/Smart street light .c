#include <stdio.h>

int main() {
    int ldrValue;

    printf("Enter LDR Value: ");
    scanf("%d", &ldrValue);

    if(ldrValue < 300)
        printf("Street Light ON\n");
    else
        printf("Street Light OFF\n");

    return 0;
}
