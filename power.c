/* Compute value of one number raised to another */

# include <stdio.h>

int main()
{
    int num1, num2, power, i;

    printf("Enter number and power: ");
    scanf("%d %d", &num1, &num2);

    power = i = 1;
    while (i <= num2)
    {
        power *= num1;
        i += 1;
    }

    printf("%d raised to %d is %d\n", num1, num2, power);
}
