/* Interchange two inputs C and D */

#include <stdio.h>

int main()
{
    float C, D, temp;

    printf("Enter two inputs (C, D): ");
    scanf("%f %f", &C, &D);

    // interchange inputs
    temp = C;
    C = D;
    D = temp;

    printf("New values of (C, D): %f %f\n", C, D);

    return 0;
}
