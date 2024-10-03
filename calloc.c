#include <stdio.h>
#include <stdlib.h>
int main()
{
   int *ptr;
   int n, s;
   printf("Enter the value:");
   scanf("%d", &n);
   ptr = (int *)calloc(n, sizeof(int));
   for (int i = 0; i < n; i++)
   {
      printf("%d\n", ptr[i]);
   }
   printf("Enter the value:");
   scanf("%d", &s);
   ptr = (int *)realloc(ptr, s * sizeof(int));
   for (int i = 0; i < s; i++)
   {
      printf("%d\n", ptr[i]);
   }
   free(ptr);
   return 0;
}