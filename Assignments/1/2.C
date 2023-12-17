#include <stdio.h>

int main()
{
    int n;

    printf("\nCheck whether a number is Even or Odd\n\n");
    printf("Enter a Number : ");
    scanf("%d", &n);

    (n % 2 == 0) ? printf("\nEven Number") : printf("\nOdd Number");

    return 0;
}