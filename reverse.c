/* Reverse 5 digit number */

# include <stdio.h>

int main()
{
    int a, copy, ra1, ra2, ra3, ra4, ra5, reverse;

    printf("Enter 5 digit number: ");
    scanf("%d", &a);

    // copy a
    copy = a;

    /*
    reverse number by finding each digit from right to left,
    and then multiplying by power of 10 in reverse order.
    */
    ra1 = copy % 10;    // unit digit
    copy = copy / 10;   // remaining digits
    ra2 = copy % 10;    // repeat
    copy = copy / 10;
    ra3 = copy % 10;
    copy = copy / 10;
    ra4 = copy % 10;
    copy = copy / 10;
    ra5 = copy % 10;
    copy = copy / 10;

    reverse = ra1 * 1e4 + ra2 * 1e3 + ra3 * 1e2 + ra4 * 1e1 + ra5;

    printf("Reverse of %d: %d\n", a, reverse);

    return 0;
}
