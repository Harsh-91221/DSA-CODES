#include <stdio.h>
#include <conio.h>
void main()
{
    int phy, chem, maths;
    printf("ENTER THE MARKS OF PHYSICS ");
    scanf("%d", &phy);
    printf("ENTER THE MARKS OF CHEMISTRY ");
    scanf("%d", &chem);
    printf("ENTER THE MARKS OF MATHS ");
    scanf("%d", &maths);
    if (phy > 40 && chem > 50 && maths > 60 && phy + maths > 150 || phy + maths + chem > 200)
    {
        printf("ELIGIBLE");
    }
    else
    {
        printf("NOT ELIGIBLE");
    }
}