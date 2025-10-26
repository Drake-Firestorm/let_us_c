/* Triangle */

#include <stdio.h>
#include <math.h>

float distance(float, float, float, float);
float area(float, float, float);
int inside_triangle(int, int, int, int, int, int, int, int);

float main()
{
    int x, y, x1, y1, x2, y2, x3, y3, it;

    printf("Enter the coordinates of the three vertices (x, y): ");
    scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3);

    printf("Enter the coordinates of the point: ");
    scanf("%d %d", &x, &y);

    it = inside_triangle(x, y, x1, y1, x2, y2, x3, y3);

    if(it == 1)
        printf("Point (%d, %d) is inside triangle:\n", x, y);
    else
        printf("Point (%d, %d) is not inside triangle:\n", x, y);

    return 0;
}


float distance(float a1, float b1, float a2, float b2)
{
    float dist;

    dist = sqrt(pow(a2 - a1, 2) + pow(b2 - b1, 2));

    return dist;
}


float area(float s1, float s2, float s3)
{
    float s, area;

    s = (s1 + s2 + s3)/2;
    area = sqrt(s * (s - s1) * (s - s2) * (s - s3));

    return area;
}


int inside_triangle(int a, int b, int a1, int b1, int a2, int b2, int a3, int b3)
{
    float A, A1, A2, A3, S1, S2, S3, ss1, ss2, ss3;

    S1 = distance(a1, b1, a2, b2);
    S2 = distance(a2, b2, a3, b3);
    S3 = distance(a1, b1, a3, b3);

    ss1 = distance(a, b, a1, b1);
    ss2 = distance(a, b, a2, b2);
    ss3 = distance(a, b, a3, b3);

    A = area(S1, S2, S3);
    A1 = area(ss1, ss2, S1);
    A2 = area(ss2, ss3, S2);
    A3 = area(ss1, ss3, S3);

    if(fabs(A - (A1 + A2 + A3)) < 1e-3)
        return 1;
    else
        return 0;
}
