/* Level of intelligence */

# include <stdio.h>

int main()
{
    float i, x;
    int y;

    for (y = 1; y <= 6; y++)
        for (x = 5.5; x <= 12.5; x+= 0.5)
            printf("y = %d x = %f  i = %f\n", y, x, 2 + (y + (0.5 * x)));
}
