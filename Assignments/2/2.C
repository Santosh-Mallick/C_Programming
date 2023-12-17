#include <stdio.h>
#include <math.h>
int main()
{
    double a, b, c, disc, root1, root2, realroots, imgroots;

    printf("\nFind Roots Of a Quadratic Equation\n");
    printf("\nEnter Coefficients of a : ");
    scanf("%lf", &a);
    printf("\nEnter Coefficients of b : ");
    scanf("%lf", &b);
    printf("\nEnter Coefficients of c : ");
    scanf("%lf", &c);

    disc = b * b - 4 * a * c;

    if (disc > 0)
    {
        root1 = (-b + sqrt(disc)) / (2 * a);
        root2 = (-b - sqrt(disc)) / (2 * a);
        printf("\nEquation Has Real Roots\n");
        printf("\nRoot1 : %.4lf and Root2 : %.4lf", root1, root2);
    }

    else if (disc == 0)
    {
        root1 = root2 = -b / (2 * a);
        printf("\nEquation Has Equal Roots\n");
        printf("\nRoot1 = Root2 : %.4lf", root1);
    }
    else
    {
        realroots = -b / (2 * a);
        imgroots = sqrt(abs(-disc)) / (2 * a);
        printf("\nEquation Has Imaginary Roots\n");
        printf("Root1 = %.4lf+%.4lfi and Root2 = %.4lf-%.4lfi",
               realroots, imgroots, realroots, imgroots);
    }

    return 0;
}