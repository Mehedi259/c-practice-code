#include <stdio.h>
#include <windows.h>
int main() {
  system("COLOR f1");
  int n, i, flag = 0;
  printf("Enter a positive integer: ");
  scanf("%d", &n);

  for (i = 2; i <= n / 2; ++i) {

    // if n is divisible by i, then n is not prime
    if (n % i == 0) {
      flag = 1;
      break;
    }
  }

  if (n == 0 || n == 1) {
    printf("%d is neither prime nor composite.", n);
  } 
  else {

    if (flag == 0)
      printf("%d is a prime number.", n);
    else
      printf("%d is not a prime number.", n);
  }

  return 0;
}