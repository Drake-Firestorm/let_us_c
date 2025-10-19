/* Check if point inside circle */

# include <stdio.h>
# include <math.h>

int main()
{
    int x, y, radius, x1, y1, dist;
    
    printf("Enter coordinates for center of circle: ");
    scanf("%d %d", &x, &y);

    printf("Enter radius of circle: ");
    scanf("%d", &radius);

    printf("Enter coordinates for point: ");
    scanf("%d %d", &x1, &y1);

    dist = sqrt((pow(x1, 2) - pow(x, 2)) + (pow(y1, 2) - pow(y, 2)));

    if (dist > radius)
        printf("Point is outside of the circle\n");
    else
        printf("Point is inside of the circle\n");

    return 0;
}
