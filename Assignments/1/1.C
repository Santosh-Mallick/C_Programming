#include <stdio.h>

int main()
{
    int A, B, C, D, E, F, G;
    printf("Evaluate The Value Of ((A+B/B*D-E)*(F-G))\n\n");
    printf("Enter The Value Of A\n");
    scanf("%d", &A);
    printf("Enter The Value Of B\n");
    scanf("%d", &B);
    printf("Enter The Value Of D\n");
    scanf("%d", &D);
    printf("Enter The Value Of E\n");
    scanf("%d", &E);
    printf("Enter The Value Of F\n");
    scanf("%d", &F);
    printf("Enter The Value Of G\n");
    scanf("%d", &G);
    C = ((A + B / B * D - E) * (F - G));
    printf("Answer : %d", C);
    return 0;
}