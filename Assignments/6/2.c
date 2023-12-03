#include <stdio.h>
int main()
{
    char str[86];
    int x, vow = 0, dig = 0, cons = 0;
    printf("\n enter string :");
    gets(str);
    for (x = 0; str[x] != '\0'; x++)
    {
        if (str[x] == 'a' || str[x] == 'e' || str[x] == 'i' || str[x] == 'o' || str[x] == 'u')
            vow++;
        else if (str[x] >= '0' && str[x] <= '9')
            dig++;
        else
            cons++;
    }
    printf("\n no. of vowel=%d", vow);
    printf("\n no. of digit=%d", dig);
    printf("\n no. of consonant=%d", cons);
    return 0;
}

//  Output
//  enter string :hello world 0101

//  no. of vowel=3
//  no. of digit=4
//  no. of consonant=9