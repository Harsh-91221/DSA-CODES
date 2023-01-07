#include <stdio.h>
#include <conio.h>
void main()
{
    int a[10], b[10], i, j;
    for (i = 0; i <= 9; i++)
    {
        printf("ENTER THE ARRAY a[%d]= ", i);
        scanf("%d", &a[i]);
    }
    for (i = 9, j = 0; i >= 0; i--, j++)
    {
        b[j] = a[i];
        printf("\nREVERSED ARRAY IS b[%d]=%d", j, b[j]);
    }
    getch();
}