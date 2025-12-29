#include <stdio.h>               //Aditya kumar sah(10099)

int sumOfDigits(int n)
{
    int sum = 0;

    while (n != 0)
    {
        sum = sum + (n % 10);
        n = n / 10;
    }

    return sum;
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Sum of digits = %d", sumOfDigits(n));

    return 0;
}
//output
// Enter a number: 12345
// Sum of digits = 15
