#include<stdio.h>

int main()
{
//if-else statement
int a[5][4],b[4][3],c[5][3];
printf("enter elements of matrix a:");
for(int i=0;i<5;i++){
for (int j=0;j<4;j++)
scanf("%d",&a[i][j]);}
printf("the elements of array a are:");
for(int i=0;i<5;i++){
for (int j=0;j<4;j++)
printf(" %d",a[i][j]);
printf("\n");} 
printf("enter elents of array b");
for(int i=0;i<4;i++){
for (int j=0;j<3;j++)
scanf("%d",&b[i][j]);}
printf("the elents of array b are:");
for(int i=0;i<4;i++){
for (int j=0;j<3;j++)
printf("%d",b[i][j]);}
printf("\n the multiplication of a and b arrays :");
int i,j,k; c[i][j]=0;
for(int i=0;i<5;i++)
{for(int j=0;j<4;j++)
{for(int k=0;k<4;k++)

c[i][j]=c[i][j]+a[i][k]*b[k][j];
}

}

for(int i=0;i<5;i++){
for (int j=0;j<3;j++)
printf(" 
%d",c[i][j]);
printf("\n");}


return 0;
}
