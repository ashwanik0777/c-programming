#include<stdio.h>
int main()
{
    int a, b, small;
    printf("Enter any two number: ");
    scanf("%d%d", &a, &b);
    if(a<b)
        small=a;
    else
        small=b;
    printf("\nSmallest of the two number is: %d", small);
    return 0;
}