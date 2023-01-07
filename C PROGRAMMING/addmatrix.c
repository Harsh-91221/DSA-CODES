#include <stdio.h>
#include <conio.h>
void main()
{
    int mat1[3][3], mat2[3][3], mat[3][3];
    printf("ENTER THE FIRST MATRIX :");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("ENTER THE SECOND MATRIX :");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }
    printf("ADDING TWO ARRAYS :");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            mat[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf(" %d", mat[i][j]);
        }
        printf("\n");
    }
    getch();
}