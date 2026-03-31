#include <stdio.h>
int product(int a,int b)
{ int c;
c=a*b;
return c;}

int main() {int a,b;
    printf("enter 2 numbers\n");
    scanf("%d %d",&a,&b);
    printf("product of %d and %d is %d",a,b,product(a,b));

    return 0;
}
