#include <stdio.h>
int main()
{
    int n;
    printf("Enter the no. of rows:");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n - 1; j++)
        {
            printf(" ");
        }
        char currntChar = 'A';
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf("%c", currntChar);
            currntChar++;
        }
        printf("\n");
    }

    return 0;
}