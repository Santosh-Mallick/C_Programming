#include <stdio.h>

void checkPrime();

int main() {
    checkPrime();
    return 0;
}

void checkPrime() {
    int num, i, flag = 0;
    printf("Enter a number to check if it is prime: ");
    scanf("%d", &num);
    for (i = 2; i <= num / 2; ++i) {
        if (num % i == 0) {
            flag = 1;
            break;
        }
    }

    if (num == 1 || num == 0) {
        printf("%d is neither prime nor composite.\n", num);
    } else {
        if (flag == 0)
            printf("%d is a prime number.\n", num);
        else
            printf("%d is not a prime number.\n", num);
    }
}

// Output
// Enter a number to check if it is prime: 113
// 113 is a prime number.