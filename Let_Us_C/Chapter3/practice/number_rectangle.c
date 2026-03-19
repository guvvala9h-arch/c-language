#include<stdio.h>
int main()
{
  int n,m;
printf("enter number of rows and columns");
scanf("%d %d",&n,&m);
for(int i=1;i<=n;i++)
{for(int j=1;j<=m;j++)
printf("%d",j);
printf("\n");
}
return 0;
}
