/* Calculation of total expenses */

# include <stdio.h>

int main()
{
    int qty, min_qty;
    float dis, price, exp;

    // define minimum quantity and discount rate
    min_qty = 1000;

    printf("Enter quantity and price: ");
    scanf("%d %f", &qty, &price);

    if (qty > min_qty)
        dis = 10 / 100.0;
    else
        dis = 0;

    exp = qty * price * (1 - dis);

    printf("Total expense: %f\n", exp);

    return 0;
}
