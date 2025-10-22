/* Print pattern */

# include <stdio.h>

int main()
{
    int i, j, k, l, sp;

    sp = 20;

    // controls number of rows
    for (i = 1, k = 1; i < 5; i++)
    {
        // controls number of spaces at start
        for (l = 1; l <= sp; l++)
            printf(" ");
        
        // reduce spaces by 2 for next round
        sp -= 2;

        // controls printing of numbers, with space on either side
        for (j = 1; j <= i; j++, k++)
            printf(" %d ", k);

        printf("\n");
    }

    return 0;
}
