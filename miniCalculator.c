#include <stdio.h>
int main()
{
    int a, choose;
    float result;
    printf("Mini Calculator\n");
    while (1)
    {
        printf("1.Kilometer to Meter\n");
        printf("2.Meter to centimeter\n");
        printf("3.Centimeter to inces\n");
        printf("4.Meter to miles\n");
        printf("5.Exit\n");
        printf("Choose the number(1-5) which action can perform:");
        scanf("%d", &choose);
        switch (choose)
        {
        case 1:
            printf("Enter the value in kilometer : ");
            scanf("%d", &a);
            result = a * 1000;
            printf("The value in meter is : %f\n", result);
            break;
        case 2:
            printf("Enter the value in meter : ");
            scanf("%d", &a);
            result = a * 1000;
            printf("The value in centimeter is : %f\n", result);
            break;
        case 3:
            printf("Enter the value in centimeter : ");
            scanf("%d", &a);
            result = a * 0.3937008;
            printf("The value in inches is : %f\n", result);
            break;
        case 4:
            printf("Enter the value in meter : ");
            scanf("%d", &a);
            result = a * 0.621371;
            printf("The value in miles is : %f\n", result);
            break;
        case 5:
            printf("Thankyou");
            return 0;
        default:
            printf("Invalid input");
        }
    }
    return 0;
}