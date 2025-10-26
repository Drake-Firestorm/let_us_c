/* Sum of digits of 5 digit number */

# include <stdio.h>

int digit_sum(int);

int main()
{
    int num, copy, d1, d2, d3, d4, d5, sum;

    printf("Enter 5 digit number: ");
        scanf("%d", &num);

    sum = digit_sum(num);

    printf("Sum of digits of %d: %d\n", num, sum);

    return 0;
}


int digit_sum(int number)
{
    int sum;

    if(number != 0)
        sum = (number % 10) + digit_sum(number / 10);
    else
        return 0;

    return (sum);
}
