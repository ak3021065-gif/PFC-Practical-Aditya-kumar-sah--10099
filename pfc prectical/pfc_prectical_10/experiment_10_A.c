#include <stdio.h>                    //Aditya kumar sah 10099

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

    int max = arr[0][0];
    int min = arr[0][0];

  
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < columns; j++) {

            if(arr[i][j] > max)
                max = arr[i][j];

            if(arr[i][j] < min)
                min = arr[i][j];
        }
    }

    printf("Largest element = %d\n", max);
    printf("Smallest element = %d\n", min);

    return 0;
}
