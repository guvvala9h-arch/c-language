#include <stdio.h>
int fact(int x)
{ int factorial=1;
    for(int i=1;i<=x;i++)
    factorial*=i;
    return factorial;}


int main() {int n,r;
    printf("enter n amd r\n");
    scanf("%d %d",&n,&r);
    int permutation=fact(n)/fact(n-r);
    printf("the permutation %dp%d is %d",n,r,permutation);

    return 0;
}
