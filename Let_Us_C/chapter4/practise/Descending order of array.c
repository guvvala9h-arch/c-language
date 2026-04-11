include <stdio.h>

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
    printf("\n");
for(int i=0;i<n;i++){
int temp=0;
 for(int k=0;k<n-1-i;k++)
 {
 if(arr[k]<arr[k+1])
 temp=arr[k];
 arr[k]=arr[k+1];
 arr[k+1]=temp;
 
 
 }
}
printf("the elements of array in descending order:");
for(int u=0;u<n;u++)
printf("%d",arr[u]);
  return 0;
}
