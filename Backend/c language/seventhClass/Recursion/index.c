// Recursion

#include <stdio.h>

int sum(int k);

int main()
{
    int num;

    printf("Enter the No to find the adding of Nth term : ");

    scanf("%d", &num);
    int result = sum(num);

    printf("The result is : %d\n", result);

    return 0;
}

int sum(int k)
{
    if (k > 0)
    {
        return k + sum(k - 1);
    }
    else
    {
        return 0;
    }
}