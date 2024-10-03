#include <stdio.h>
int main()
{
    int a;
    printf("Enter the number:");
    scanf("%d", &a);
    for (int i = 1; i <= 10; i++)
    {
        int b;
        b = a * i;
        printf("%d x %d = %d\n", a, i, b);
    }
}