/* Pythagorean Triplet */

# include <stdio.h>

int main()
{
    int a, b, c, a2, b2, c2;

    for (a = 1; a <= 30; a++)
    {
        a2 = a * a;
        for (b = a; b <= 30; b++)
        {
            b2 = b * b;
            for (c = b; c <= 30; c++)
            {
                c2 = c * c;
                if (a2 + b2 == c2)
                    printf("%d %d %d are Pythagorean Triplet\n", a, b, c);
            }
        }
    }

    return 0;
}
