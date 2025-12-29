#include <stdio.h>          //Aditya kumar sah 10099

int main()
{
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

   int max=arr[0];
   for(int i=0; i<n; i++){
    if(max<arr[i]){
        max=arr[i];
    }
   }

   int min=arr[0];
   for(int i=0; i<n; i++){
    if(min>arr[i]){
        min=arr[i];
    }
   }

   printf("Largest element is =%d \n",max);
   printf("Smallest element is =%d ",min);

    return 0;
}


// Enter size of array: 4
// Enter 4 elements:
// 7
// 8
// 9
// 2
// Largest element is =9
// Smallest element is =2