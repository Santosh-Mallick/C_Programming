#include <stdio.h>

void swap(int a, int b) {
  int temp = a;
  a = b;
  b = temp;
}

int main() {
  int x = 10, y = 20;

  printf("Before swapping (Call by Value): x = %d, y = %d\n", x, y);
  swap(x, y);
  printf("After swapping (Call by Value): x = %d, y = %d\n", x, y);

  return 0;
}

// Output
// Before swapping (Call by Value): x = 10, y = 20
// After swapping (Call by Value): x = 10, y = 20