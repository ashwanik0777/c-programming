#include <stdio.h>
struct complex
{

    int img;
    int real;
};
int main()
{
    struct complex Number1 = {4, 6};
    struct complex *ptr = &Number1;
    printf("The real part is %d\n", ptr->real);
    printf("The imaginary part is %d\n", ptr->img);
    return 0;
}
