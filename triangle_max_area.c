/* Find maximum of N triangles */

#include <stdio.h>
#include <math.h>

float area(float, float, float);

int main()
{
    int i, n = 6, max = 0;
    float tri_area[n];
    float tri_a[] = {137.4, 155.2, 149.3, 160.0, 155.6, 149.7};
    float tri_b[] = {80.9, 92.62, 97.93, 100.25, 68.95, 120.0};
    float tri_angle[] = {0.78, 0.89, 1.35, 9.00, 1.25, 1.75};

    for(i = 0; i < n; i++)
    {
        tri_area[i] = area(tri_a[i], tri_b[i], tri_angle[i]);

        if(tri_area[max] < tri_area[i])
            max = i;
    }

    printf("Area of %d triangles: ", n);
    for(i = 0; i < n; i++)
        printf("%f ", tri_area[i]);
    printf("\nPlot %d has xax area: %f\n", max + 1, tri_area[max]);

    return 0;
}


float area(float a, float b, float angle)
{
    return 0.5 * a * b * sin(angle);
}
