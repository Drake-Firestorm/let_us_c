/* Identify youngest */

# include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter the three ages: ");
    scanf("%d %d %d", &a, &b, &c);

    // compare the three ages to identify the youngest
    if ((a < b) && (a < c))
        printf("%d is the youngest\n", a);
    else if ((a < b) && (a > c))
        printf("%d is the youngest\n", c);
    else if ((b < a) && (b < c))
        printf("%d is the youngest\n", b);
    else if ((a < b) && (a == c))
        printf("%d and %d is the youngest and of same age\n", a, c);
    else if ((b < a) && (b == c))
        printf("%d and %d is the youngest and of same age\n", b, c);
    else if ((a < c) && (a == b))
        printf("%d and %d is the youngest and of same age\n", a, b);
    else if ((a == b) && (a == c))
        printf("All of same age\n");

    return 0;
}
