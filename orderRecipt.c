#include <stdio.h>
int main()
{
    char choice;
    int quantity;
    float total_cost;
    printf("Menu : \n");
    printf("1.Pizza : ₹10 per pizza\n");
    printf("2.Burgur : ₹5 per Burgur\n");
    printf("3.Pasta : ₹8 per Pasta\n");
    printf("4.Salad : ₹4 per Salad\n");

    printf("Enter the choice (1-4):");
    scanf("%c", &choice);

    printf("Enter the quantity :");
    scanf("%d", &quantity);

    switch (choice)
    {
    case '1':
        total_cost = quantity * 10;
        break;
    case '2':
        total_cost = quantity * 5;
        break;
    case '3':
        total_cost = quantity * 8;
        break;
    case '4':
        total_cost = quantity * 4;
        break;

    default:
        printf("Invalid choice\n");
        break;
    }
    printf("Tital cost : ₹%.2f", total_cost);
    return 0;
}