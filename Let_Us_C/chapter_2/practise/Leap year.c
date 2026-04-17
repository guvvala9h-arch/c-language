#include<stdio.h>
int main(){
int n,i,count=0;
printf("enter the value of n");
scanf("%d",&n);int a;
for(i=1;i<=n;i++){
if( (i%4==0&&i%100!=0)||(i%400==0&&i%100==0)) {
count++;
}

}
printf("total no of leap years :%d",count);
return 0;
}
