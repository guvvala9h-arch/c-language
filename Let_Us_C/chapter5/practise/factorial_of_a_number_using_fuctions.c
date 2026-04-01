#include <stdio.h>
int fact(int n){
    int factorial=1;
    for(int i=1;i<=n;i++)
    factorial*=i;
    return factorial;

}
int main() {
 int x;
 printf("enter a number whose factorial is to be found\n");
 scanf("%d",&x);
 printf("the factorial of the number %d is %d",x,fact(x));

    return 0;
}
