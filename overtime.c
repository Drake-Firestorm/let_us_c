/* Calculate overtime */

# include <stdio.h>

int main()
{
    float o_pay;
    int hours, i;

    i = 0;
    while(i < 10)
    {
        printf("Enter no. of hours worked: ");
        scanf("%d", &hours);

        if (hours > 40)
            o_pay = (hours - 40) * 120.0;
        else
            o_pay = 0;

        printf("Overtime pay: %f\n", o_pay);

        i += 1;
    }

    return 0;
}
