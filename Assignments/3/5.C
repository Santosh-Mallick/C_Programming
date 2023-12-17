#include <stdio.h>

int main()
{
    int i, f = 0, s = 1, n, seq;
    printf("Enter The length of fibonacci Series : ");
    scanf("%d", &n);
    printf("%d\n%d\n", f, s);

    for (i = 2; i <= n; i++)
    {
        seq = f + s;
        f = s;
        s = seq;
        printf("%d\n", seq);
    }
    return 0;
}

// Enter The length of fibonacci Series : 8
// 0
// 1
// 1
// 2
// 3
// 5
// 8
// 13
// 21