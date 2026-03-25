#include <stdio.h>

int main() {
    int a[5];
printf("enter a binary number\n");
for(int i=0;i<5;i++)
scanf("%d",&a[i]);
for(int i=0;i<5;i++)
{if(a[i]==1)
a[i]=0;
else if (a[i]==0)
a[i]=1;
}
printf("the ones compliment of the binary number is\n");
for(int i=0;i<5;i++)
printf("%d",a[i]);
    return 0;
}
