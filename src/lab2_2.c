#include <stdio.h>
/*
Name: Yusuf Dogukan Dogan
Student ID: 251ADB239
*/
// long variable usage reason
// factorial numbers can be greater than the integer limit
long long factorial(int n) {
  long long result = 1;
  // factorial algorithm
  for (int x = 1; x <= n; x++) {
    result = result * x;
  }
  return result;
}

int main(int argc, char* argv[]) {
  int n;

  printf("Enter a non negative integer: \n");
  scanf("%d", &n);
  // error message
  if (n < 0) {
    printf("Error: You should write a number 0 or bigger.\n");
  } else {
    printf("Factorial: %lld\n", factorial(n));
  }

  return 0;
}
