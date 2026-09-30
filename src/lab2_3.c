#include <stdio.h>
/*
Name: Yusuf Dogukan Dogan
Student ID: 251ADB239
*/
int is_prime(int n) {
  // Prime numbers starts from 2
  if (n < 2) {
    return 0;
  }
  // Checking algorithm
  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0) {
      return 0;
    }
  }

  return 1;
}

int main(int argc, char* argv[]) {
  int n;

  printf("Enter an integer n (>= 2): ");
  scanf("%d", &n);
  // Error message
  if (n < 2) {
    printf("You should enter a number 2 or greater.\n");
  } else {
    printf("Prime numbers up to %d:\n", n);
    // Checking every number from 2 to n if they are prime
    for (int i = 2; i <= n; i++) {
      if (is_prime(i) == 1) {
        printf("%d ", i);
      }
    }
    printf("\n");
  }
  return 0;
}
