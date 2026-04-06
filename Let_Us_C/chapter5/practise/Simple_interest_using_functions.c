#include<stdio.h>
int s_interest(int p,int t,int r){
int SI=p*t*r/100;
return SI;



}
int main (){
int p,t,r ;
float SI;
  printf("enter principal , time and rate_of_interest");
  scanf("%d %d %d",&p,&t,&r);
 SI= s_interest(p,t,r);
  printf("the simple interest is %f",SI);
  
  return 0;
}
