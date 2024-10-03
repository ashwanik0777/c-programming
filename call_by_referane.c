#include <stdio.h>
int action(int *x, int *y)
{
    int add, sum;
    int sub;
    add = *x + *y;
    sub = *x - *y;
    *x = add;
    *y = sub;
    return 0;
}
int main()
{
    int a, b;
    printf("Enter the value of a:");
    scanf("%d", &a);
    printf("Enter the value of b:");
    scanf("%d", &b);
    action(&a, &b);
    printf("The value of a is %d\n", a);
    printf("The value of b is %d\n", b);
    return 0;
}