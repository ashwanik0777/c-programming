#include <stdio.h>
int main()
{
    int odd, even, a;
    printf("enter the number: ");
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        printf("even number:%d\n", a);
    }
    else
    {
        printf("odd: %d\n", a);
    }
    return 0;
}