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


    return 0;
}
