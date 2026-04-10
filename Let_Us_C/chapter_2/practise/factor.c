#include<stdio.h>
int main()
{
int a,b,n=0;
printf("enter a,b");
scanf("%d %d",&a,&b);
if(a<b)
n=a;
else n=b;
for(int i=1;i<=n;i++)
{
if(a%i==0 && b%i==0)
printf("%d",i);
}


return 0;
}
