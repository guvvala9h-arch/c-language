#include<stdio.h>
int main()
{
  int a[20],n;
printf("enter array size\n");
scanf("%d",&n);
printf("enter array elements\n");
for(int i=0;i<n;i++)
  scanf("%d\t",&a[i]);
printf("array before reversing\n");
for(int i=0;i<n;i++)
  printf("%d\t",a[i]);
printf("\narray after reversing\n");
for(int i=n-1;i>=0;i--)
  printf("%d\t",a[i]);
return 0;
}
  
