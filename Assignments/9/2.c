#include <stdio.h>

void findFactorial(int, int *);

int main() {
  int num, factorial;

  printf("Enter a number: ");
  scanf("%d", &num);

  findFactorial(num, &factorial);

  printf("The factorial of %d is: %d\n", num, factorial);

  return 0;
}

void findFactorial(int n, int *f) {
  int i;

  *f = 1;

  for (i = 1; i <= n; i++) {
    *f = *f * i;
  }
}

// Output
// Enter a number: 5
// The factorial of 5 is: 120