#include <stdio.h>
int main()
{
    float basicsalary, hra, da, grosssalary;
    printf("enter the basic: Rs.");
    scanf("%f", &basicsalary);
    if (basicsalary < 0)
        
    {
        printf("error.\n");
        return 0;
    }
    if (basicsalary < 1500)
    {
        hra = 0.10 * basicsalary;
        da = 0.90 * basicsalary;
    }
    else
    {
        hra = 500;
        da = 0.98 * basicsalary;
    }
    grosssalary = basicsalary + hra + da;
    printf("gross salary:Rs %2f\n", grosssalary);
    return 0;
}
