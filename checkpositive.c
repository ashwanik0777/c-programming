#include <stdio.h>
int main()
{
    int number;
    printf("enter the number:");
    scanf("%d", &number);
    if (number >= 0)
    {
        printf("%d is positive number.\n", number);
    }
    else
    {
        printf("%d is negetive number.\n", number);
    }
    return 0;
}