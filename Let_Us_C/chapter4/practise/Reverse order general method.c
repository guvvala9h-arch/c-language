#include <stdio.h>

int main() {
    int n,j=0;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
   
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Array elements are:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
for(int i=0;i<n/2;i++){
 int temp =0;
j=n-1-i;
temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
}
printf("the values of array in reverse order is"); 
for(int j=0;j<n;j++)
{
printf("%d",arr[j]);
}

  return 0;
}



