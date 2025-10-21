/* Validate triangle 2 - using length of sides */

# include <stdio.h>

int main()
{
    int s1, s2, s3;

    printf("Enter the lengths of 3 sides of triangle: ");
    scanf("%d %d %d", &s1, &s2, &s3);

    if (s1 > s2 && s1 > s3 && s1 < (s2 + s3))
        printf("Triangle is valid\n");
    else if (s2 > s1 && s2 > s3 && s2 < (s1 + s3))
        printf("Triangle is valid\n");
    else if (s3 > s1 && s3 > s2 && s3 < (s1 + s2))
        printf("Triangle is valid\n");
    else
        printf("Triangle is not valid\n");

    return 0;
}
