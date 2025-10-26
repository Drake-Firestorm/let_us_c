/* Nested Address */

#include <stdio.h>

int main()
{
    float i, *j, **k;

    i = 3.14;
    j = &i;
    k = &j;

    printf("Value of i: %f\n", i);
    printf("Value of j: %p\n", j);
    printf("Value at *j: %f\n", *j);
    printf("Value of k: %p\n", k);
    printf("Value at *k: %p\n", *k);
    printf("Value at *k: %f\n", **k);
    
    return 0;
}
