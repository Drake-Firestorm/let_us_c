/* Armstrong */

# include <stdio.h>
# include <math.h>

int main()
{
    int i, copy, d1, d2, d3;

    i = 1;
    while (i <= 500)
    {
        copy = i;
        d1 = copy % 10;
        copy = copy / 10;
        d2 = copy % 10;
        d3 = copy / 10;
        
        if (i == (pow(d1, 3) + pow(d2, 3) + pow(d3, 3)))
            printf("%d: Armstrong\n", i);

        i += 1;
    }

    return 0;
}
