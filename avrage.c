#include <stdio.h>
int main()
{
  int a, b, c;
  printf("enter the value of a :");
  scanf("%d", &a);
  printf("enter the value of b :");
  scanf("%d", &b);
  printf("enter the value of c :");
  scanf("%d", &c);
  float average = (a + b + c) / 3.0;
  printf("avrage value %.2f :\n", average);
  return 0;
}