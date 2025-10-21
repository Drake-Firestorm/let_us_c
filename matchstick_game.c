/* Matchstick game */

# include <stdio.h>

int main()
{
    int round, pick, available, max;

    available = 21;
    round = 0;
    max = 4;
    while (available > 0)
    {
        if (available < max)
            max = available;

        if (round % 2 == 0)
        {
            printf("Your turn. Available: %d\n", available);

            if (available == 1)
                printf("You lose\n");
            else
            {
                printf("Pick a matchstick between 1-%d: ", max);
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
                printf("Pick a matchstick between 1-%d: ", max);
                if (available > 16)
                {
                    pick = available - 16;
                    printf("%d\n", pick);
                }
                else if (available > 11)
                {
                    pick = available - 11;
                    printf("%d\n", pick);
                }
                else if (available > 6)
                {
                    pick = available - 6;
                    printf("%d\n", pick);
                }
                else
                {
                    pick = available - 1;
                    printf("%d\n", pick);
                }
            }
        }

        available -= pick;
        round ++;
    }

    return 0;
}
