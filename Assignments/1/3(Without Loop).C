#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2;
    printf("\nAddition Of Two Numbers Without using + Operator\n");
    printf("\nEnter The First Number : ");
    scanf("%d", &num1);
    printf("\nEnter The Second Number : ");
    scanf("%d", &num2);
    for (int i = 1; i <= num2; i++)
    {
        num1++;
    }
    printf("\nSum Of Two Numbers : %d", num1);
    return 0;
}