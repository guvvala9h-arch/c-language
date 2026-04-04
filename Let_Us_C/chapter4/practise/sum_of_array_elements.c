#include <stdio.h>

int main() {
    int a[10],sum=0;
    printf("enter the array elements\n");
    for(int i=0;i<10;i++)
    scanf("%d",&a[i]);
    printf("the sum of the array elements is");
    for(int i=0;i<10;i++)
    sum+=a[i];
    printf("%d",sum);

    return 0;
}
