#include <stdio.h>

int main()
{
    int f = 0, s = 1, n, seq;

    printf("Enter the length of fibonacci series : ");
    scanf("%d", &n);
    printf("%d\n%d\n", f, s);

    for (int i = 2; i <= n; i++)
    {
        seq = f + s;
        f = s;
        s = seq;
        printf("%d\n", seq);
    }

    return 0;
}
