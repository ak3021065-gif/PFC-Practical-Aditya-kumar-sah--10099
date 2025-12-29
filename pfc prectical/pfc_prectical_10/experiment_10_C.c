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
