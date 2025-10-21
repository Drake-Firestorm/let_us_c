/* Print all trignometric ratios of an angle */

# include <stdio.h>
# include <math.h>

int main()
{
    float angle;

    printf("Enter angle: ");
    scanf("%f", &angle);

    // convert angle to radians
    angle = angle * 3.14 / 180;

    printf("Sin: %f\n", sin(angle));
    printf("Cos: %f\n", cos(angle));
    printf("Tan: %f\n", tan(angle));

    if ((pow(sin(angle), 2) + pow(cos(angle), 2)) == 1)
        printf("Sum of squares of sine and cosine of this angle is equal to 1\n");
    else
        printf("Sum of squares of sine and cosine of this angle is not equal to 1\n");

    return 0;
}
