#include<stdio.h>
int main()
{
  int age;
printf("enter the age\n");
scanf("%d",&age);
if(age>=18)
{
if(age<=50)
  printf(" adult and eligible to vote\n");
    else(" old and eligible to vote\n");
}
else printf("not eligible to vote");
return 0;
}
