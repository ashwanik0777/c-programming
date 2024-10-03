#include <stdio.h>
#include <string.h>

struct carAgencyManger
{
    char name[100];
    char dlNum[100];
    int kms;
    char route[100];
};

int main()
{
    int Num;
    printf("Enter the employ Number :");
    scanf("%d", &Num);
    for (int i = 1; i <= Num; i++)
    {
        struct carAgencyManger si;
        printf("\nEnter the name of the %d driver:", i);
        scanf("%s", si.name);
        printf("Enter the DL Number:");
        scanf("%s", si.dlNum);
        printf("Enter the Trevel in Km:");
        scanf("%d", &si.kms);
        printf("Enter the route:");
        scanf("%s", si.route);
    }

    return 0;
}
