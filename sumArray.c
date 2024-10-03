#include <stdio.h>
int sumArray(int arr[], int size)
{
  int sum = 0;
  for (int i = 0; i < size; i++)
  {
    sum += arr[i];
  }
  return sum;
}
int main()
{
  int n, a;
  printf("enter the number:");
  scanf("%d", &n);
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    printf("enter the %d values:", i + 1);
    scanf("%d", &arr[i]);
  }
  a = sumArray(arr, n);
  printf("Sum of array :%d", a);
  return 0;
}
