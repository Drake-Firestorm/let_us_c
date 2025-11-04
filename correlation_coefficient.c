/* Calculate correlation coefficient */

#include <stdio.h>
#include <math.h>

float corr(float *, float *, int);
float sum(float *, int);
void power(float *, float *, int, int);

int main()
{
    int i, n;
    float r;
    float a[] = {34.22, 39.87, 41.85, 43.23, 40.06, 53.29, 53.29, 54.14, 49.12, 40.17, 55.15};
    float b[] = {102.43, 100.93, 97.43, 97.81, 98.32, 98.32, 100.07, 97.08, 91.59, 94.85, 94.65};

    n = sizeof(a) / sizeof(a[0]);
    r = corr(a, b, n);

    printf("Values:\n");
    for(i = 0; i < n; i++)
        printf("%f  %f\n", a[i], b[i]);
    printf("Correlation Coefficient: %f\n", r);

    return 0;
}


// calculate sum of elements in array
float sum(float *x, int n)
{
    int i;
    float s = 0; 

    for(i = 0; i < n; i++)
        s += x[i];

    return s;
}


// return elements in array raised to power p
void power(float *xp, float *x, int p, int n)
{
    int i;

    for(i = 0; i < n; i++)
        xp[i] = pow(x[i], p);
}


// calculate correlation coefficient
float corr(float *x, float *y, int n)
{
    int i;
    float r, sum_x, sum_y, sum_x2, sum_y2, sum_xy;
    float xy[n], x2[n], y2[n];

    // calculate xy
    for(i = 0; i < n; i++)
        xy[i] = x[i] * y[i];

    // calculate sum's
    sum_x = sum(x, n);
    sum_y = sum(y, n);
    power(x2, x, 2, n);    sum_x2 = sum(x2, n);
    power(y2, y, 2, n);    sum_y2 = sum(y2, n);
    sum_xy = sum(xy, n);

    // correlation coefficient
    r = (
        ((n * sum_xy) - (sum_x * sum_y))
        / sqrt(((n * sum_x2) - pow(sum_x, 2)) * ((n * sum_y2) - pow(sum_y, 2)))
    );

    return r;
}
