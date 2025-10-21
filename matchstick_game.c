/* Matchstick game */

# include <stdio.h>

int main()
{
    int round, pick, available;

    available = 21;
    round = 0;
    while (available > 0)
    {
        if (round % 2 == 0)
        {
            printf("Your turn. Available: %d\n", available);

            if (available == 1)
                printf("You lose\n");
            else
            {
                printf("Pick a matchstick between 1-4: ");
                scanf("%d", &pick);
            }
        }
        else
        {
            printf("Computer's turn. Available: %d\n", available);

            if (available == 1)
                printf("Computer loses\n");
            else
            {
                printf("Pick a matchstick between 1-4: ");
                pick = 5 - pick;
                printf("%d\n", pick);
            }
        }

        available -= pick;
        round ++;
    }

    return 0;
}
