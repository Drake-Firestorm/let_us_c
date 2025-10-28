/* Program to use macros in header file “areaperi.h */

#include <stdio.h>
#include "./headers/areaperi.h" // give path of file if not in same folder as .c file

int main()
{
    int d, a, b;
    float sid1, sid2, sid3, sid, p_tri, p_cir, p_sqr, a_tri, a_cir, a_sqr;
    float r, base, height;

    // Circle
    printf("Enter radius of circle: ");
    scanf("%f", &r);

    p_cir = PERIC(r);
    a_cir = AREAC(r);
    printf("Circumference of circle = %f\n", p_cir);
    printf("Area of circle = %f\n", a_cir);

    // Square
    printf("Enter side of square: ");
    scanf("%f", &sid);

    a_sqr = AREAS(sid);
    p_sqr = PERIS(sid);
    printf("Perimeter of square = %f\n", p_sqr);
    printf("Area of square = %f\n", a_sqr);

    // Triangle
    printf("Enter length of 3 sides of triangle: ");
    scanf("%f %f %f", &sid1, &sid2, &sid3);
    printf("Enter base and height of triangle: ");
    scanf("%f %f", &base, &height);

    p_tri = PERIT(sid1, sid2, sid3);
    a_tri = AREAT(base, height);
    printf("Perimeter of triangle = %f\n", p_tri);
    printf("Area of triangle = %f\n", a_tri);

    return 0;
}
