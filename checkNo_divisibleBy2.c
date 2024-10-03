#include <stdio.h>
int main()
{
    int a;
    printf("Write a number: ");
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        printf("The number is divisible by 2\n");
    }
    else
    {
        printf("number is not divible by 2\n");
    }
    return 0;
}