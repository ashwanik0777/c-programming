#include <stdio.h>
int main()
{
    int i, f, n;
    i = f = 1;
    printf("Enter the number to find the factorial:");
    scanf("%d", &n);
    do
    {
        f *= i;
        i++;
    } while (i <= n);
    printf("Factorial of %d is %d\n", n, f);
    return 0;
}