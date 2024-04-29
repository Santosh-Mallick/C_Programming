#include <stdio.h>
int main()
{
    int numbers[10], i, max = 0, min = 0;
    printf("Enter 10 Number :\n");
    for (i = 0; i < 10; i++)
    {
        printf("Enter Numbers : \n");
        for (i = 0; i < 10; i++)
        {
            scanf("%d", &numbers[i]);

            if (i == 0)
            {
                max = min = numbers[i];
            }
            else
            {
                if (numbers[i] > max)
                {
                    max = numbers[i];
                }
                if (numbers[i] < min)
                {
                    min = numbers[i];
                }
            }
        }
    }
    printf("Maximum Number : %d\n", max);
    printf("Minimum Number : %d\n", min);
    printf("Difference Between Max & Min : %d\n", max - min);
    return 0;
}