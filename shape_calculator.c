/* Area and perimeter calculation */

# include <stdio.h>

int main()
{
    float l, b, area, peri, r, circum;

    printf("Enter length and breadth of rectangle: ");
    scanf("%f %f", &l, &b);

    /* calculate area and perimeter of rectange */
    area = l * b;
    peri = 2 * (l + b);

    printf("Area of rectange: %f\n", area);
    printf("Perimeter of rectange: %f\n", peri);

    printf("Enter the radius of circle: ");
    scanf("%f", &r);
    
    /* calculate area and circumference of circle */
    area = 3.414 * r * r;
    circum = 2 * 3.414 * r;

    printf("Area of circle: %f\n", area);
    printf("Circumference of circle: %f\n", circum);

    return 0;
}
