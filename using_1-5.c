#include <stdio.h>
int main()
{
    int number;
    printf("enter the number between (1-5):");
    scanf("%d", &number);
    switch (number)
    {
    case 1:
        printf("you entered 1.\n");
        break;
    case 2:
        printf("you entered 2.\n");
        break;
    case 3:
        printf("you entered 3.\n");
        break;
    case 4:
        printf("you entered 4.\n");
        break;
    case 5:
        printf("you entered 5.\n");
        break;
    default:
        printf("you entered invalid number.\n");
    }
    return 0;
}