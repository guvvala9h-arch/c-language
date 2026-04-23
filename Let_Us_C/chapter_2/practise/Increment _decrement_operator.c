#include<stdio.h>

int main()
{
//preincrement and post increment 
int a,b,c,d,e;
printf("enter a value");
scanf("%d",&a);
b=a++;c=++a;
printf("a=%d,b=%d,c=%d",a,b,c);
d=--a;e=a--;
printf("d=%d,e=%d,a=%d",d,e,a);



    return 0;
}
