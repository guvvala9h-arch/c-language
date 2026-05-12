#include <stdio.h>

int main() {

    int battery;

    while(1) {

        printf("Enter Battery Percentage: ");
        scanf("%d", &battery);

        if(battery > 80) {
            printf("Battery Full\n");
        }
        else if(battery > 30) {
            printf("Battery Normal\n");
        }
        else {
            printf("Low Battery Warning\n");
        }

        printf("-----------------\n");
    }

    return 0;
}
