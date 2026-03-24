#include <stdio.h>

int main() {
int a[6],search,flag=0;
printf("enter the elemtns of matrix \n");
for(int i=0;i<6;i++)
scanf("%d",&a[i]);
printf("enter an element to search\n");
scanf("%d",&search);
for(int i=0;i<6;i++)
{if(search==a[i])
flag=1;
}
if(flag==1)
printf("the searched element is found");
else printf("the searched element is not found");


    return 0;
}
