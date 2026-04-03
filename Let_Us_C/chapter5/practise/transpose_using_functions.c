#include<stdio.h>
void compute_transpose(int r, int c, int mat[r][c],int trans[c][r])
{
  for(int i=0;i<r;i++)
{for(int j=0;j<c;j++)
  trans[j][i]=mat[i][j];}}
int main()
{
  int r=2,c=3;
int mat[2][3]={{1,2,3{,{4,5,6}};
int transpose[3][2];
compute_transpose(r,c,mat,transpose);
printf("transpose matrix\n");
  for(int i=0;i<r;i++)
{for(int j=0;j<c;j++)
  printf("%d",transpose[i][j]);
printf("\n");
}
return 0;
}
