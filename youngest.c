/* Identify youngest */

# include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter the three ages: ");
    scanf("%d %d %d", &a, &b, &c);

    // compare the three ages to identify the youngest
    if (a < b)
        {
            if (a < c)
                printf("%d is the youngest\n", a);
            else
                {
                    if (a > c)
                        printf("%d is the youngest\n", c);
                    else
                        printf("%d and %d is the youngest and of same age\n", a, c);
                }
        }
    else
        {
            if (b < c)
                printf("%d is the youngest\n", b);
            else
                {
                    if (b > c)
                        printf("%d is the youngest\n", c);
                    else
                        printf("%d and %d is the youngest and of same age\n", b, c);
                }
        }
}
