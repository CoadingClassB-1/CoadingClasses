#include <stdio.h>

int main()
{
    // printf("1");
    // printf("2");
    // printf("3");
    // printf("4");
    // printf("5");
    // printf("6");

    // a++  a+1

    // int a = 26;

    // while (a <= 25)
    // {
    //     printf("%d\n", a);
    //     a++;
    // }

    // do
    // {
    //     printf("%d\n", a);
    //     a++;
    // } while (a <= 25);

    // for (int i = 100; i >= 0; i--)
    // {
    //     printf("%d\n", i);
    // }

    char let;
    int num;

    printf("Enter the letter e or o, e for Even no and o for Odd no : ");
    scanf(" %c", &let);

    printf("Enter the number to find the even or odd no between it : ");
    scanf("%d", &num);

    if (let == 'e')
    {
        if (num % 2 == 0)
        {
            for (int i = 1; i <= num; i++)
            {
                if (i % 2 == 0)
                {
                    printf("%d\n", i);
                }
            }
        }
        else
        {
            printf("Sorry you have entered an odd no!!!\n");
        }
    }
    else if (let == 'o')
    {
        if (num % 2 != 0)
        {
            for (int i = 1; i <= num; i++)
            {
                if (i % 2 != 0)
                {
                    printf("%d\n", i);
                }
            }
        }
        else
        {
            printf("Sorry you have entered an even no!!!\n");
        }
    }
    else
    {
        printf("Invalid input!!! Please Enter the correct input\n");
    }
}