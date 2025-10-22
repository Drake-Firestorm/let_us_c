/* Population growth calculation */

# include <stdio.h>
# include <math.h>

int main()
{
    int i, pop;

    for (i = 1; i <= 10; i++)
    {
        pop = 100000 * pow(1.1, i);
        printf("Population at end of year %d: %d\n", i, pop);
    }

    return 0;
}
