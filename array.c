#include <stdio.h>
int main()
{
    int array[100], search, c, n;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    printf("Enter %d integer(s):", n);
    for (c = 0; c < n; c++)
        scanf("%d", &array[c]);
    printf("Enter a number to find in the array:");
    scanf("%d", &search);
    for (c = 0; c < n; c++)
    {
        if (array[c] == search)
        {
            printf("%d is present at location %d.\n", search, c + 1);
            break;
        }
    }
    if (c == n)
        printf("%d isn't present in the array.\n", search);
    return 0;
}