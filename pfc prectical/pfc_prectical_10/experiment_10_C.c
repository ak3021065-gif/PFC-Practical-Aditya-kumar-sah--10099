#include <stdio.h>               //Aditya kumar sah 10099

int main() {
    int rows, columns;

    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &columns);

    int arr[rows][columns];

    printf("Enter %d elements:\n", rows * columns);
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < columns; j++) {
            scanf("%d", &arr[i][j]);
        }
    }


    for(int i = 0; i < rows; i++) {
        int sum = 0;  
        for(int j = 0; j < columns; j++) {
            sum += arr[i][j];
        }
        printf("Sum of Row %d = %d\n", i + 1, sum);
    }

    return 0;
}

// Enter rows and columns: 3 3
// Enter 9 elements:
// 6
// 9
// 8
// 5
// 4
// 7
// 9
// 0
// 6
// Sum of Row 1 = 23
// Sum of Row 2 = 16
// Sum of Row 3 = 15
