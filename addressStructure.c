#include <stdio.h>
struct address
{
    int houseNo;
    int block;
    char city[100];
    char state[100];
};
void printAdd(struct address add)
{
    printf("Address is :%d,%d,%s,%s\n", add.houseNo, add.block, add.city, add.state);
}
int main()
{
    struct address adds[5];
    printf("\n\nEnter Info for persion-1\n");
    printf("Enter House No.: ");
    scanf("%d", &adds[0].houseNo);
    printf("Enter the block: ");
    scanf("%d", &adds[0].block);
    printf("Enter the city: ");
    scanf("%s", adds[0].city);
    printf("Enter the state: ");
    scanf("%s", adds[0].state);

    printf("\n\nEnter Info for persion-2\n");
    printf("Enter House No.: ");
    scanf("%d", &adds[1].houseNo);
    printf("Enter the block: ");
    scanf("%d", &adds[1].block);
    printf("Enter the city: ");
    scanf("%s", adds[1].city);
    printf("Enter the state: ");
    scanf("%s", adds[1].state);

    printf("\n\nEnter Info for persion-3\n");
    printf("Enter House No.: ");
    scanf("%d", &adds[2].houseNo);
    printf("Enter the block: ");
    scanf("%d", &adds[2].block);
    printf("Enter the city: ");
    scanf("%s", adds[2].city);
    printf("Enter the state: ");
    scanf("%s", adds[2].state);

    printf("\n\nEnter Info for persion-4\n");
    printf("Enter House No.: ");
    scanf("%d", &adds[3].houseNo);
    printf("Enter the block: ");
    scanf("%d", &adds[3].block);
    printf("Enter the city: ");
    scanf("%s", adds[3].city);
    printf("Enter the state: ");
    scanf("%s", adds[3].state);

    printf("\n\nEnter Info for persion-5\n");
    printf("Enter House No.: ");
    scanf("%d", &adds[4].houseNo);
    printf("Enter the block: ");
    scanf("%d", &adds[4].block);
    printf("Enter the city: ");
    scanf("%s", adds[4].city);
    printf("Enter the state: ");
    scanf("%s", adds[4].state);

    printAdd(adds[0]);
    printAdd(adds[1]);
    printAdd(adds[2]);
    printAdd(adds[3]);
    printAdd(adds[4]);
    return 0;
}
