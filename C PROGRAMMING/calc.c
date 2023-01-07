#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b;
    char op;
    printf("Enter the value of a and b ");
    scanf("%d%d", &a, &b);
    fflush(stdin);
    printf("Enter the operator ");
    scanf("%c", &op);
    switch (op)
    {
    case '+':
        printf("RESULT IS %d ", a + b);
        break;
    case '-':
        printf("RESULT IS %d ", a - b);
        break;
    case '/':
        printf("RESULT IS %d", a / b);
        break;
    case '*':
        printf("RESULT IS %d", a * b);
        break;
    case '%':
        printf("RESULT IS %d", a % b);
        break;
    default:
        printf("INVALID");
    }
}