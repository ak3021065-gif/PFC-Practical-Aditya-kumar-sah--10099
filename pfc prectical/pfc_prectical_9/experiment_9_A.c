#include <stdio.h>             //Aditya kumar sah 10099

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

    for(int i=0; i<n/2; i++){
        int temp=arr[i];
        arr[i]=arr[n-1-i];
        arr[n-1-i]=temp;
    }

    printf("Reversed array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}


// Enter size of array: 5
// Enter 5 elements:
// 76
// 98
// 56
// 78
// 6
// Reversed array:
// 6 78 56 98 76