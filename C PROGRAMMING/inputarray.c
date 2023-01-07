#include <stdio.h>
void main()
{
    int a[10];
    printf("\nENTER THE ELEMENTS OF ARRAY ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("ARRAY IS: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d", a[i]);
    }
    getch();
}