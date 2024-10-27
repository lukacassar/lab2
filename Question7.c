#include <stdio.h>
#include <string.h>

int main() {
  int n,original, factorial = 1;
  printf("Enter a number\n");
  scanf("%d", &n);
  original = n;

  if(n < 0) {
    printf("Factorial is undefined\n");
    return 0;
  } else {
  while (n>1) {
    factorial *= n;
    n--;
  }
}
  printf("Factorial of %d is %d", original, factorial);
    return 0;
}
