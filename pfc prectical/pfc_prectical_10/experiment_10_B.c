#include <stdio.h>                //Aditya kumar sah 10099

int main() {
    int n;

    printf("Enter size of square matrix : ");
    scanf("%d", &n);

    int arr[n][n];

    printf("Enter %d elements:\n", n * n);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    int sum = 0;

    for(int i = 0; i < n; i++) {
        sum += arr[i][i];
    }

    printf("Sum of diagonal elements = %d\n", sum);

    return 0;
}
