#include <stdio.h>             //Aditya kumar sah 10099

int main()
{
    int n,sum=0;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);

    }

for(int i=0; i<n; i++){
    if(arr[i]%2==0){
        sum=sum+arr[i];
    }
}

printf("Sum of all even elements are: %d",sum);
 return 0;}

//  Enter size of array: 5
// Enter 5 elements:
// 3
// 4
// 5
// 6
// 7
// Sum of all even elements are: 10