#include <stdio.h>

int main() {
  int n, *p, *q;

  printf("Enter a number: ");
  scanf("%d", &n);

  p = &n;
  q = p + (sizeof(n) / sizeof(int)) - 1;

  while (p < q) {
    if (*p != *q) {
      printf("The number is not a palindrome.\n");
      return 0;
    }

    p++;
    q--;
  }

  printf("The number is a palindrome.\n");

  return 0;
}

// Output 
// Enter a number: 545
// The number is a palindrome.