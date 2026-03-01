#include<stdio.h>
int main()
{
  int a,b,temp;
printf("enter 2 integers\n");
scanf("%d %d",&a,&b);
printf("numbers before duplicating a=%d,b=%d\n",a,b);
temp=a;
a=b;
b=temp;
printf("numbers after duplicating a=%d ,b=%d\n",a,b);
return 0;
}

  
