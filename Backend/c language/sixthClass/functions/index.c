#include <stdio.h>

int add(a, b)
{
    int c = a + b;
    printf("The result is : %d\n", c);
}

int sub(a, b)
{
    int c = a - b;
    printf("The result is : %d\n", c);
}

int mul(a, b)
{
    int c = a * b;
    printf("The result is : %d\n", c);
}

int div(a, b)
{
    int c = a / b;
    printf("The result is : %d\n", c);
}

int main()
{
    int a;
    int b;

    printf("Enter the first no : ");
    scanf("%d", &a);

    printf("Enter the second no : ");
    scanf("%d", &b);

    add(a, b);
    sub(a, b);
    mul(a, b);
    div(a, b);
}