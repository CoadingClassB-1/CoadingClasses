#include <stdio.h>

int main()
{
    int num;
    char let;

    printf("Enter e for Even and o for Odd : ");
    scanf(" %c", &let);

    printf("Enter the no to find even or odd : ");
    scanf("%d", &num);

    if (let == 'e')
    {
        if (num % 2 == 0)
        {
            printf("Yes the numbers is even : %d\n", num);
        }
        else
        {
            printf("You have entered an odd no\n");
        }
    }
    else if (let == 'o')
    {
        if (num % 2 != 0)
        {
            printf("Yes the number is odd : %d\n", num);
        }
        else
        {
            printf("You have entered an even no\n");
        }
    }
    else
    {
        printf("Invalid letter!!!. Please enter the letter e or o\n");
    }
}