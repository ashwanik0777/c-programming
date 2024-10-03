#include <stdio.h>
#include <math.h>
float squarerootofNum(float n)
{
    float result;
    result = sqrt(n);
    return result;
}
int main()
{
    float num;
    printf("Enter a number: ");
    scanf("%f", &num);
    printf("Squareroot of %.2f is :%.2f", num, squarerootofNum(num));
    return 0;
}
