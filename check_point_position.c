/* Check if point lies on X-axis, Y-axis or origin*/

# include <stdio.h>

int main()
{
    int x, y;

    printf("Enter coordinates of (x, y): ");
    scanf("%d %d", &x, &y);

    if (x == 0)
        {
            if (y == 0)
                printf("Point lies on origin\n");
            else
                printf("Point lies on X-axis\n");
        }
    else
        {
            if (y == 0)
                printf("Point lies on Y-axis\n");
            else
                printf("Point lies neither on X-axix, Y-axis or origin\n");
        }
    
    return 0;
}
