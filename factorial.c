#include <stdio.h>
int main()
{
    int n, i;
    float factorial = 1;
    printf("Enter the number to find Factorial:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    if (n < 0)
    {
        printf("Sorry! Factorial is not defined for negative numbers.");
        return 1;
    }

    printf("factorial of %d is :%.2f\n", n, factorial);
    return 0;
}