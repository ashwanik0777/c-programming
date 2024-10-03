#include <stdio.h>

int max(int *ptr1, int *ptr2)
{
   if (*ptr1 > *ptr2)
   {
      return *ptr1;
   }

   else
   {
      return *ptr2;
   }
}

int main()
{
   int x, y;
   printf("Enter first numbers: ");
   scanf("%d", &x);
   printf("Enter second numbers: ");
   scanf("%d", &y);
   printf("Greater no. is :%d ", max(&x, &y));
}
