/* ASCII */

# include <stdio.h>

int main()
{
    int i;

    i = 0;
    while (i < 255)
    {
        printf("%d: %c\n", i, i);
        i += 1;
    }
}
