/* Calculate gross salary */

# include <stdio.h>

int main()
{
    float bp, da, hra, gs;

    printf("Enter basic pay: ");
    scanf("%f", &bp);

    /* calculate da, hra, gross salary */
    if (bp < 1500)
        {
            hra = bp * 10 / 100.0;
            da = bp * 90 / 100.0;
        }
    else
        {
            hra = 500;
            da = bp * 98 / 100.0;
        }

    gs = bp + da + hra;

    printf("Basic pay = %f\n", bp);
    printf("Dearness allowance = %f\n", da);
    printf("House rent allowance = %f\n", hra);
    printf("Gross salary = %f\n", gs);

    return 0;
}