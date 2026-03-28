#include <stdio.h>

int main(){int a[6][6];
    printf("enter a matrix\n");
for(int i=0;i<2;i++)
{ for(int j=0;j<2;j++)
scanf("%d",&a[i][j]);
}
printf("the matrix is\n");
for(int i=0;i<2;i++)
{ for(int j=0;j<2;j++)
printf("%d\t",a[i][j]);
printf("\n");
}
printf("the transpose of matrix is\n");
for(int i=0;i<2;i++)
{ for(int j=0;j<2;j++)
printf("%d\t",a[j][i]);
printf("\n");
}


    return 0;
}
