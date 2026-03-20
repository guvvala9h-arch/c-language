#include<stdio.h>
int main()
{
  int a[5];
printf("enter array elments\n");
for(int i=0;i<=5;i++)
{
scanf("%d",&a[i]);
}
printf("the array element are\n");
for(int i=0;i<=5;i++)
  printf("%d\t",a[i]);
return 0;
}
