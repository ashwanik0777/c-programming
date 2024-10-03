#include <stdio.h>
int main()
{
    float celcius, fahrenhit;
    printf("enter temp in celcius:");
    scanf("%f", &celcius);
    fahrenhit = (celcius * 9 / 2) + 32;
    printf("your temp if fehrenhit: %.2f", fahrenhit);
    return 0;
}