#include<stdio.h>
#include<math.h>
int main()
{
  int t;
float p,r,amount,cp;
printf("enter principle amount,rate,time;
  scanf("%f %f %d",&p,&r,&t);
amount=p*pow((1+r/100),t);
cp= amount-p;
printf("compound interest is %f",cp);
return 0;
}
