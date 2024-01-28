#include <stdio.h>

int main()
{
    int numbers[10], i;
    printf("Enter 10 Numbers : \n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &numbers[i]);
    }
    printf("Entered Numbers : \n");
    for (i = 0; i < 10; i++)
    {
        printf("%d\n", numbers[i]);
    }
    return 0;
}

// Output
// Enter 10 Numbers : 
// 1
// 1
// 3
// 5
// 4
// 8
// 9
// 8
// 7
// 7
// Entered Numbers : 
// 1
// 1
// 3
// 5
// 4
// 8
// 9
// 8
// 7
// 7