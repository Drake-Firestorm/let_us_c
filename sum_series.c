/* Sum of first N terms of a series */

# include <stdio.h>

int sum_n(int);

int main()
{
    int n;
    float sum;

    printf("Enter max terms: ");
    scanf("%d", &n);

    sum = sum_n(n);

    printf("Sum of series %f\n", sum);

    return 0;
}


int sum_n(int number)
{
    int s;

    if(number == 1)
        return 1;
    else
        s = number + sum_n(number - 1);

    return s;
}
