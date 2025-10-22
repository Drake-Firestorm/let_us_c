/* Natural Logarithm */

# include <stdio.h>

int main()
{
    int i;
    float x, n_log, n_log_temp;

    printf("Enter a number: ");
    scanf("%f", &x);

    n_log_temp = 1;

    for (i = 1; i<= 7; i++)
    {
        n_log_temp *= (x - 1) / x;

        if (i == 1)
            n_log = n_log_temp;
        else
            n_log += n_log_temp / 2;
    }

    printf("Natural log of %f: %f\n", x, n_log);

    return 0;
}
