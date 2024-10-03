#include <stdio.h>
int main(){
    int a,b;
    printf("Enter the shape of triange.\n");
    printf(" 1.To print triangle in forward.\n");
    printf(" 2.To print triangle in reverse.\n");
    printf("Enter your choice:");
    scanf("%d",&a);
    switch(a){
        case 1:
        printf("Enter the number of rows.\n");
        scanf("%d",&b);
        for (int i = 1; i <=b; i++)
        {
            for (int j = 1; j <=i; j++)
            {
               printf("*");
            } 
            printf("\n");  
        }
        break;
        case 2:
        printf("Enter the number of rows.\n");
        scanf("%d",&b);
        for (int i = b; i >=1; i--)
        {
            for (int j = 1; j <=i; j++)
            {
               printf("*");
            }
            printf("\n");
        }
        break;
        default:
        printf("Invalid choice.\n");
    } 
    return 0;
}