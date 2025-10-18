/* Temperature convertor */

# include <stdio.h>

int main()
{
    float cent, fahr;

    printf("Enter temperature: ");
    scanf("%f", &fahr);

    /* convert to centigrade */
    cent = (fahr - 32) / 1.8;

    printf("Centigrade: %f\n", cent);

    return 0;
}
