#include <stdio.h>
int sum(int a,int b)
{ int c;
c=a+b;
return c;}
int main() { int x,y;
printf("enter 2 number\n");
scanf("%d %d",&x,&y);
printf("sum of %d and %d is %d",x,y,sum(x,y));
    

    return 0;
}
