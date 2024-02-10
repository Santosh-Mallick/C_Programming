#include <stdio.h>

int main() {
    float p, t, r, SI;
    float *x, *y, *z;

    printf("Enter the principal (amount), time, and rate::\n");
    scanf("%f%f%f", &p, &t, &r);

    x = &p;
    y = &t;
    z = &r;

    SI = (*x * *y * *z) / 100;

    printf("\nSimple Interest = %.2f\n", SI);
    return 0;
}

// Output
// Enter the principal (amount), time, and rate::
// 1500
// 2
// 8

// Simple Interest = 240.00