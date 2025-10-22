/* Compounded Amount */

# include <stdio.h>
# include <math.h>

int main()
{
    int i, n, q;
    float r, p, a;

    for (i = 1; i <= 10; i++)
    {
        printf("Enter principal, annual rate (in perc), times per year, no.of years: ");
        scanf("%f %f %d %d", &p, &r, &q, &n);

        a = p * pow(1 + (r / 100 / q), n * q);

        printf("%f\n", a);
    }

    return 0;
}
