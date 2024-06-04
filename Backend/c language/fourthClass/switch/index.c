#include <stdio.h>

int main()
{
    int a;
    char opr;
    int b;
    int c;

    printf("Enter the first no : ");
    scanf("%d", &a);

    printf("Enter the operator no : ");
    scanf(" %c", &opr);

    printf("Enter the second no : ");
    scanf("%d", &b);

    switch (opr)
    {
    case '+':
        c = a + b;
        printf("The result is : %d", c);
        break;

    case '-':
        c = a - b;
        printf("The result is : %d", c);
        break;

    case '*':
        c = a * b;
        printf("The result is : %d", c);
        break;

    case '/':
        c = a / b;
        printf("The result is : %d", c);
        break;

    case '%':
        c = a % b;
        printf("The result is : %d", c);
        break;

    default:
        printf("Invalid Operator!!!");
    }
}