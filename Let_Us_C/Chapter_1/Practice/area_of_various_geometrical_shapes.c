#include<stdio.h>
int main()
{
  int choice,r,l,w,b,h,side;
float area;
printf("1.Area of circle\n");
printf("2.Area of rectangle\n");
printf("3.Area of triangle\n");
printf("4.Area of square\n");
printf("enter your choice\n");
scanf("%d",&choice);
switch(choice)
{
case 1: printf("enter radius of the circle");
scanf("%d",&r);
area=3.14*r*r;
break;
case 2:printf("enter length and width");
scanf("%d %d",&l,&w);
area = l*w;
break;
case 3 :printf("enter breadth and height");
scanf("%d %d",&b,&h);
area = 0.5*b*h;
break;
case 4:printf("enter side of square");
scanf("%d",&side);
area= side*side;
break;
}
printf("the area is %f",area);
return 0;
}
