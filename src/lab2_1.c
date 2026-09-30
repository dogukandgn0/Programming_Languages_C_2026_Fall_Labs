#include <stdio.h>

/*
Name: Yusuf Dogukan Dogan
Student ID:251ADB239
*/

int sum_to_n(int n) {
  int sum = 0;
  // Sum algorithm
  for (int x = 1; x <= n; x++) {
    sum += x;
  }

  return sum;
}

int main(void) {
  int n;

  if (n < 1) {
    // error message
    printf("Error: You should write a number 1 or bigger.\n");
  } else {
    printf("Sum of integers: %d\n", sum_to_n(n));
  }

  return 0;
}
