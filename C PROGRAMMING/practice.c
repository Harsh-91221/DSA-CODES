#include <stdio.h>
#include <conio.h>
void main()
{
    int n, count;
    printf("enter the number ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
    {
        printf("prime");
    }
    else
    {
        printf("not");
    }
}
