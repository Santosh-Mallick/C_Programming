#include <stdio.h>

int main()
{
    int num1, num2, result;
    char ch;

    printf("\nCalculator Using Switch Case\n");
    printf("Enter First Number : ");
    scanf("%d", &num1);
    printf("Enter Second Number : ");
    scanf("%d", &num2);
    printf("Enter Operator(+,-,/,*) : ");
    scanf(" %c", &ch);

    switch (ch)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '/':
        result = num1 / num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    default:
        printf("\nError: Invaild Operator.\n");
    }
    printf("Result : %d %c %d = %d\n", num1, ch, num2, result);

    return 0;
}