/* Calculate profit and loss */

# include <stdio.h>

int main()
{
    float buy_price, sell_price, pl;

    printf("Enter buy and sell price: ");
    scanf("%f %f", &buy_price, &sell_price);

    pl = sell_price - buy_price;

    if (pl > 0)
        printf("Seller made a profit of %f\n", pl);
    if (pl < 0)
        printf("Seller made a loss of %f\n", -pl);
    else
        printf("No profit or loss\n");
}
