/* Validate triangle */

# include <stdio.h>

int main()
{
    int a, b, c, sum;

    printf("Enter the three angles of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    sum = a + b + c;

    if (sum == 180)
        printf("Triangle is valid\n");
    else
        printf("Triangle is invalid\n");

    return 0;
}
