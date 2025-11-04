/* Sum of distance between points */

#include <stdio.h>
#include <math.h>

float distance(int *, int *);

int main()
{
    int i, n = 10;
    int x[n], y[n], pt1[2], pt2[2];
    float dist = 0;
    
    printf("Enter %d (x, y) coordinates\n", n);
    for(i = 0; i < n; i++)
    {
        printf("Enter coordinate %d: ", i + 1);
        scanf("%d %d", &x[i], &y[i]);
    }
    
    for(i = 1; i < n; i++)
    {
        pt1[0] = x[i - 1]; pt1[1] = y[i - 1];
        pt2[0] = x[i]; pt2[1] = y[i];
        dist += distance(pt1, pt2);
    }

    printf("Sum of distance between first and last point: %f\n", dist);

    return 0;
}


// distance between points
float distance(int *pt1, int *pt2)
{
    int i;
    float dist = 0;

    for(i = 0; i < 2; i++)
        dist += pow(pt2[i] - pt1[i], 2);
    dist = sqrt(dist);

    return dist;
}
