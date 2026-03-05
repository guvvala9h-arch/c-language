#include<stdio.h>
int main()
{
  int a,b,c;
char oper;
printf("enter 2 numbers\n");
scanf("%d %d",&a,&b);
printf("select any of the operand- +,-,*,%,/\n");
scanf("%c",&oper);
switch(oper)
{
case '+' : c=a+b;
break;
case'-': c=a-b;
break;
case '*':c=a*b;
break;
case'/': c=a/b;
break;
case'%': c=a%b;
break;
default: printf("selected inappropriate symbol");
}
printf("result is %d",c);
return 0;
}
