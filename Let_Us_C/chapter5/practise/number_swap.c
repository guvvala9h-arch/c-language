#include <stdio.h>
int swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    return *a,*b;
}

int main() {int x,y;
printf("enter 2 numbers\n");
scanf("%d %d",&x,&y);
printf("the two numbers before swapping are x=%d,y=%d\n",x,y);
swap(&x,&y);
printf("the numbers after swapping are x=%d,y=%d",x,y);

    return 0;
}
