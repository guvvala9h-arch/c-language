#include <stdio.h>

int main() {
    int age;
printf("enter the age\n");
scanf("%d",&age);
if(age>=18&& age<=45)
printf("eligible to vote and youth\n");
else if(age>=45 && age<=60)
printf("eligoble to vote and old\n");
else printf("not eligible to vote\n");
    return 0;
}
