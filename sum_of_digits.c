/* Sum of digits of 5 digit number */

# include <stdio.h>

int main()
{
    int num, copy, d1, d2, d3, d4, d5, sum;

    printf("Enter 5 digit number: ");
        scanf("%d", &num);

    // copy number
    copy = num;

    d1 = copy % 10; copy = copy / 10;
    d2 = copy % 10; copy = copy / 10;
    d3 = copy % 10; copy = copy / 10;
    d4 = copy % 10; copy = copy / 10;
    d5 = copy % 10; copy = copy / 10;

    sum = d1 + d2 + d3 + d4 + d5;

    printf("Sum of digits of %d: %d\n", num, sum);

    return 0;
}
