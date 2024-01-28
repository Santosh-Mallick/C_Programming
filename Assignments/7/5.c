#include <stdio.h>

int calculateFactorial(int n);

int main() {
    int number, result;
    printf("Enter a number to calculate its factorial: ");
    scanf("%d", &number);
    result = calculateFactorial(number);
    printf("Factorial of %d = %d\n", number, result);

    return 0;
}

int calculateFactorial(int n) {
    if (n == 0 || n == 1) {
        return 1; // Base case: factorial of 0 and 1 is 1
    } else {
        // Recursive case: n! = n * (n-1)!
        return n * calculateFactorial(n - 1);
    }
}

// Output
// Enter a number to calculate its factorial: 5
// Factorial of 5 = 120