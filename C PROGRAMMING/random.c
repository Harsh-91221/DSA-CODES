#include <stdio.h>
#include <conio.h>
void main()
{
    int a[100], n, i, item, loc = -1;
    printf(“Enter number of elements\n ”);
    scanf(“% d”, &n);
    printf(“Enter the numbers\n”);
    for (i = 0; i < n; i++)
    {
        scanf(“% d”, &a[i]);
    }
    printf(“enter item to be searched\n”);
    scanf(“% d”, &item);
    for (i = 0; i < n; i++)
    {
        if (item == a[i])
        {
            Loc = i;
            break;
        }
    }
    if (loc >= 0)
        printf(“\n % d is found in position % d item”, item, loc + 1);
    else
        printf(“\n item does not exist\n”);
    getch();
}