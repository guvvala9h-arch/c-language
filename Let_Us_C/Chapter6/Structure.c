#include<stdio.h>
struct student{
int rollno,total ;
char name[50];
int marks[5];}s[5];
int main(){
int n,i,j;
printf("enter number of students:\n");
scanf("%d",&n);
for(i=0;i<n;i++){
printf("roll\n");
scanf("%d",&s[i].rollno);
printf("name\n");
scanf("%s",s[i].name);
printf("3 subject marks \n");
for(j=0;j<3;j++)
scanf("%d",&s[i].marks[j]);
}
for(i=0;i<n;i++){
s[i].total=0;
for(j=0;j<3;j++)

s[i].total+=s[i].marks[j];
}
for(i=0;i<n;i++){
printf("name%s\n",s[i].name);
printf("roll %d\n",s[i].rollno);
printf("total marks %d",s[i].total);
}


return 0;
}
