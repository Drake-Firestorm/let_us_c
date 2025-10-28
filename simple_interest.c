/* Simple Interest and Amount */

#include <stdio.h>
#include "./headers/interest.h"

int main()
{
    float p, r, t, si, amt;

    printf("Enter principal, interest rate (in %%) and period: ");
    scanf("%f %f %f", &p, &r, &t);

    si = SI(p, r, t);
    amt = AMOUNT(p, si);

    printf("Simple Interest is %f\n", si);
    printf("Amount is %f\n", amt);

    return 0;
}
