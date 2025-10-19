/*
    Calculate area of triangle given length of the 3 sides.
    Uses Heron's formula.
*/

# include <stdio.h>
# include <math.h>

int main()
{
    float a, b, c, sp, area;

    printf("Enter the length of the sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    // semi-perimeter
    sp = (a + b + c) / 2;

    // area
    area = sqrt(sp * (sp - a) * (sp - b) * (sp - c));

    printf("Area of triangle: %f\n", area);

    return 0;
}
