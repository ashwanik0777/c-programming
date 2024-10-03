#include <stdio.h>
int sumofDigit(int n)
{
    int sum = 0;
    while (n != 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);
    printf("Sum of No. is:  %d\n", sumofDigit(num));
    return 0;
}
