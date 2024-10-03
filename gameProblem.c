#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int generateRandomNum(int n)
{
    srand(time(NULL));
    return rand() % n;
}
int greater(char c1, char c2)
{
    if (c1 == 'r' && c2 == 's')
    {
        return 1;
    }
    else if (c2 == 'r' && c1 == 's')
    {
        return 0;
    }
    else if (c1 == 's' && c2 == 'p')
    {
        return 1;
    }
    else if (c2 == 's' && c1 == 'p')
    {
        return 0;
    }
    else if (c1 == 'p' && c2 == 'r')
    {
        return 1;
    }
    else if (c2 == 'p' && c1 == 'r')
    {
        return 0;
    }
    else if (c1 == c2)
    {
        return -1;
    }
    return 0;
}

int main()
{
    int num;
    int playerScore = 0;
    int computerScore = 0;
    char playerchar, compchar;
    char choose[] = {'r', 'p', 's'};
    printf("Welcome To The Royal's Game:-\n");
    for (int i = 0; i < 3; i++)
    {
    end:
        printf("Your's Turn:\n");
        printf("Choose:1 for Rock,2 for Paper,& 3 for Seasor:");
        scanf("%d", &num);
        getchar();
        if (num <= 3 && num >= 1)
        {
            playerchar = choose[num - 1];
            printf("You Choose:%c\n\n", playerchar);
        }
        else
        {
            printf("Invalid Input Plz Try angain\n");
            goto end;
        }

        printf("Computer's Turn:\n");
        printf("Choose:1 for Rock,2 for Paper,& 3 for Seasor:\n");
        num = generateRandomNum(3) + 1;
        compchar = choose[num - 1];
        printf("CPU Choose:%c\n\n", compchar);

        if (greater(compchar, playerchar) == 1)
        {
            computerScore += 1;
            printf("CPU Got it!\n");
        }
        else if (greater(compchar, playerchar) == -1)
        {
            computerScore += 0;
            playerScore += 0;
            printf("It's a Draw!\n");
        }
        else
        {
            playerScore += 1;
            printf("You Got it!\n");
        }
        printf("Your Score:%d\n", playerScore);
        printf("Computer Score:%d\n\n", computerScore);
    }
    if (computerScore > playerScore)
    {
        printf("Computer Won the Game\n");
    }
    else if (computerScore < playerScore)
    {
        printf("You Won the Game\n");
    }
    else
    {
        printf("Game Draw\n");
    }
    printf("Thankyou!");
    return 0;
}