/* Paper size calcualtor */

# include <stdio.h>

int main()
{
    int l0, l1, l2, l3, l4;
    int b0, b1, b2, b3, b4;

    l0 = 1189;
    b0 = 841;
    l1 = l0 / 2;
    l2 = l1 / 2;
    l3 = l2 / 2;
    l4 = l3 / 2;
    b1 = b0 / 2;
    b2 = b1 / 2;
    b3 = b2 / 2;
    b4 = b3 / 2;

    printf("Size of A0: %d x %d\n", l0, b0);
    printf("Size of A1: %d x %d\n", l1, b0);
    printf("Size of A2: %d x %d\n", l1, b1);
    printf("Size of A3: %d x %d\n", l2, b1);
    printf("Size of A4: %d x %d\n", l2, b2);
    printf("Size of A5: %d x %d\n", l3, b2);
    printf("Size of A6: %d x %d\n", l3, b3);
    printf("Size of A7: %d x %d\n", l4, b3);
    printf("Size of A8: %d x %d\n", l4, b4);

    return 0;
}
