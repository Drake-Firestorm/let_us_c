/* Check if three points fall on one straight line */

# include <stdio.h>

int main()
{
    int x1, y1, x2, y2, x3, y3, area;

    printf("Enter the coordinates for 3 points: ");
    scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3);

    area = ((x1 * (y2 - y3)) + (x2 * (y3 - y1)) + (x3 * (y1 - y2))) / 2;

    if (area == 0)
        printf("The three points fall on one straight line\n");
    else
        printf("The three points do not fall on one straight line\n");

    return 0;
}
