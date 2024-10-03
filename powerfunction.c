#include <stdio.h>

float customPow(float base, int exponent)
{
    float result = 1;
    for (int i = 0; i < exponent; i++)
    {
        result *= base;
    }

    return result;
}
int main()
{
    float base, result;
    int exponent;
    printf("Enter the base: ");
    scanf("%f", &base);
    printf("Enter the exponent: ");
    scanf("%d", &exponent);
    printf("%.2f raised to the power of %d is %.2f\n", base, exponent, customPow(base, exponent));
    return 0;
}
