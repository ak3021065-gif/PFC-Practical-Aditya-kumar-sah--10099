#include <stdio.h>

void printTriangle(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

int main()
{
    int n;

    printf("Enter height: ");
    scanf("%d", &n);

    printTriangle(n);

    return 0;
}
