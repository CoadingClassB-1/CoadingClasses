#include <stdio.h>

int main()
{
    int a;
    char opr;
    int b;
    int c;

    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the operator: ");
    scanf(" %c", &opr);

    printf("Enter the second number: ");
    scanf("%d", &b);

    if (opr == '+') {
        c = a + b;
        printf("The result is: %d\n", c);
    } else if(opr == '-'){
        c = a-b;
        printf("The result is: %d\n", c);
    } else if(opr == '*'){
        c = a*b;
        printf("The result is: %d\n", c);
    } else if(opr == '/'){
        c = a/b;
        printf("The result is: %d\n", c);
    } else{
        printf("Invalid Operator!!!\n");
    }
}
