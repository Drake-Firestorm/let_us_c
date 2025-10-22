/* Prime numbers */

# include <stdio.h>

int main()
{
    int i, j, x;

    i = 2;
    while (i <= 300)
    {
        j = 2;
        x = 0;
        while (j <= i/2)
        {
            if (i % j == 0)
            {
                // printf("%d is not prime\n", i);
                x = 1;
                break;
            }

            j++;
        }
        if (x == 0)
            printf("%d is prime\n", i);

        i++;
    }
    
    return 0;
}
