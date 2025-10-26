/* Circularly shift */

#include <stdio.h>

void circular_shift(int *, int *, int *);

int main()
{
    int x, y, z;

    printf("Enter 3 numbers (x, y, z): ");
    scanf("%d %d %d", &x, &y, &z);

    circular_shift(&x, &y, &z);

    printf("x: %d, y: %d, z: %d\n", x, y, z);

    return 0;
}


void circular_shift(int *x, int *y, int *z)
{
    int t1;

    t1 = *x;
    *x = *z;
    *z = *y;
    *y = t1;
}
