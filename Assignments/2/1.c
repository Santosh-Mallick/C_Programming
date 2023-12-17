#include <stdio.h>
int main()
{
    int a, b, c;
    printf("\n Enter Number : ");
    scanf("%d", &a);
    printf("\n Enter Second Number : ");
    scanf("%d", &b);
    printf("\n Enter Third Number : ");
    scanf("%d", &c);

    if (a >= b && a >= c)
        printf("%d is the Largest.", a);
    else if (b >= a && b >= c)
        printf("%d is the Largest.", b);
    else
        printf("%d is the Largest.", c);
    return 0;
}
