/* 24 hours of day */

# include <stdio.h>

int main()
{
    int i;

    for (i = 0; i < 24; i++)
    {
        if (i == 0)
            printf("0 Midnight\n");
        else if (i == 12)
            printf("12 Noon\n");
        else if (i < 12)
            printf("%d AM\n", i);
        else
            printf("%d PM\n", i);
    }

    return 0;
}
