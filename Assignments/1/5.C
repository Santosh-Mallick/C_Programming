#include <stdio.h>

int main()
{
    int dividend, divisor, quotient, remainder;
    printf("\nProgram To Compute Quotient & Remainder\n\n");
    printf("\nEnter The Dividend : ");
    scanf("%d", &dividend);
    printf("\nEnter The Divisor : ");
    scanf("%d", &divisor);

    quotient = dividend / divisor;

    remainder = dividend % divisor;

    printf("\nQuotient = %d\n", quotient);
    printf("\nRemainder = %d\n", remainder);

    return 0;
}
