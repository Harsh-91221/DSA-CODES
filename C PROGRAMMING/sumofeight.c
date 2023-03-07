#include <stdio.h>
int main()
{
    int n, i, sum = 0, t;
    printf("Enter the number for series ");
    scanf("%d", &t);
    printf("Enter the limit of sum ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum = sum + i * t;
    }
    printf("Sum = %d", sum);
}