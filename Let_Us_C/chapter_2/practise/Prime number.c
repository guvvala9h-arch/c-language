#include<stdio.h>
int main(){
int n;
printf("Enter the n value other than 0 and 1\n");
scanf("%d",&n);
if((n==2||n==3)||(n%6==1||n%6==5))
printf("%d is a prime number",n);
else printf("%d is not a prime number",n);
return 0;
}
