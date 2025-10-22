/* Ramanujan number */

# include <stdio.h>
# include <math.h>

int main()
{
    int i, j, k, l, sum1, sum2;

    for (i = 1; i <= 20; i++)
    {
        for (j = i + 1; j <= 20; j++)
        {
            sum1 = pow(i, 3) + pow(j, 3);

            for (k = i + 1; k <= 20; k ++)
            {
                for (l = k + 1; l <= 20; l++)
                {
                    sum2 = pow(k, 3) + pow(l, 3);

                    if (sum1 == sum2)
                        printf("Ramanujan numbers: %d %d and %d %d\n", i, j, k, l);
                }
            }
        }
    }

    return 0;
}
