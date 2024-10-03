#include <stdio.h>
char temSelect(char n){
    if (n >= 25)
    {
        return 'H'; 
    }
    else 
        {
            return 'C'; 
        }
}
int main()
{
    float num;
    printf("Enter a number: ");
    scanf("%f", &num);
    printf("Current Situation is:%c", temSelect(num));
    return 0;
}
