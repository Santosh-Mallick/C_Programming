#include <stdio.h>

void swap(int *x, int *y) {
  int temp = *x;
  *x = *y;
  *y = temp;
}

int main() {
  int a = 10;
  int b = 20;

  printf("Before swapping: a = %d, b = %d\n", a, b);

  swap(&a, &b);

  printf("After swapping: a = %d, b = %d\n", a, b);

  return 0;
}

// Output
// Before swapping: a = 10, b = 20
// After swapping: a = 20, b = 10