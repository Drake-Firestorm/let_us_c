/* Distance convertor */

# include <stdio.h>

int main()
{
    float km, m, ft, in, cm;

    printf("Enter the distance in kilometers: ");
    scanf("%f", &km);

    /* convert to other metrics */
    m = km * 1e3;
    cm = m * 1e2;
    in = cm / 2.54;
    ft = in / 12;

    printf("Kilometers: %f\n", km);
    printf("Meters: %f\n", m);
    printf("Centimeters: %f\n", cm);
    printf("Inches: %f\n", in);
    printf("Feet: %f\n", ft);

    return 0;
}
