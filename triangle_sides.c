/* Validate triangle 2 - using length of sides */

# include <stdio.h>
# include <math.h>

int main()
{
    int s1, s2, s3;

    printf("Enter the lengths of 3 sides of triangle: ");
    scanf("%d %d %d", &s1, &s2, &s3);

    if (s1 >= s2 && s1 >= s3 && s1 < (s2 + s3))
    {
        printf("Triangle is valid\n");
        if (s1 == s2 && s1 == s3)
            printf("Triangle is equilateral\n");
        else if (s2 == s3)
            printf("Triangle is isosceles\n");
        else if (pow(s1, 2) == (pow(s2, 2) + pow(s3, 2)))
            printf("Triangle is right angled\n");
        else
            printf("Triangle is scalene\n");
    }
    else if (s2 >= s1 && s2 >= s3 && s2 < (s1 + s3))
    {
        printf("Triangle is valid\n");
        if (s1 == s3)
            printf("Triangle is isosceles\n");
        else if (pow(s2, 2) == (pow(s1, 2) + pow(s3, 2)))
            printf("Triangle is right angled\n");
        else
            printf("Triangle is scalene\n");
    }
    else if (s3 >= s1 && s3 >= s2 && s3 < (s1 + s2))
    {
        printf("Triangle is valid\n");
        if (s1 == s2)
            printf("Triangle is isosceles\n");
        else if (pow(s3, 2) == (pow(s1, 2) + pow(s2, 2)))
            printf("Triangle is right angled\n");
        else
            printf("Triangle is scalene\n");
    }
    else
        printf("Triangle is not valid\n");

    return 0;
}
