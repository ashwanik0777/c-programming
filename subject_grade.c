#include <stdio.h>
int main()
{
    int marks;
    printf("enter the marks:");
    scanf("%d", &marks);
    if (marks >= 96 && marks <= 100)
    {
        printf("%d A+grade\n", marks);
    }
    else if (marks >= 91 &&marks <= 95)
    {
        printf("%d A grade \n", marks);
    }
    else if (marks >= 81 &&marks <= 90)
    {
        printf("%d B grade \n", marks);
    }
    else if (marks >= 71 &&marks <= 80)
    {
        printf("%d C grade \n", marks);
    }
    else if (marks >= 61 &&marks <= 70)
    {
        printf("%d D grade \n", marks);
    }
    else if (marks >= 50 &&marks <= 60)
    {
        printf("%d E grade \n", marks);
    }
    else if (marks < 50)
    {
        printf("%d F grade \n", marks);
    }
    return 0;
}