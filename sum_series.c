/* Sum of first seven terms of a series */

# include <stdio.h>

int main()
{
    int n;
    float sum, fact;

    n = fact = 1;
    sum = 0;
    while (n <= 7)
    {
        fact *= n;
        sum += n / fact;

        n++;
    }

    printf("Sum of series %f\n", sum);

    return 0;
}
