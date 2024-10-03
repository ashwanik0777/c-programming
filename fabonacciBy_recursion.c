#include <stdio.h>

int fabonacci(int n)
{
  if (n <= 1)
  {
    return n;
  }
  else
  {
    return (fabonacci(n - 1) + fabonacci(n - 2));
  }
}
int main()
{
  int n;
  printf("Enter the number of terms: ");
  scanf("%d", &n);
  fabonacci(n);
  printf("Fibonacci Series: ");
  for (int i = 0; i < n; i++)
  {
    printf("%d ", fabonacci(i));
  }
  printf("\n");
  return 0;
}
