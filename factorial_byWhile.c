#include <stdio.h>
int main()
{
    int i, f, n;
    i = f = 1;
    printf("Enter the number to find the factorial :");
    scanf("%d", &n);
    while (i <= n)
    {
        f *= i;
        i++;
    }
    printf("factorial of %d is %d\n", n, f);
    return 0;
}