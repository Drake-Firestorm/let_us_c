/* Calculate gross salary */

# include <stdio.h>

int main()
{
    float bp, da, hra, gs;

    printf("Enter basic pay: ");
    scanf("%f", &bp);

    /* calculate da, hra, gross salary */
    da = 0.4 * bp;
    hra = 0.2 * bp;
    gs = bp + da + hra;

    printf("Basic pay = %f\n", bp);
    printf("Dearness allowance = %f\n", da);
    printf("House rent allowance = %f\n", hra);
    printf("Gross salary = %f\n", gs);

    return 0;
}