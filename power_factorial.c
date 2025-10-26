/* Power and Factorial */

# include <stdio.h>

void power_fact(float, int, int, float *, int *);

int main()
{
    float a, power;
    int b, number, factorial;

    printf("Enter two numbers for num1 raised to num2: ");
    scanf("%f %d", &a, &b);

    printf("Enter number for factorial: ");
    scanf("%d", &number);

    power_fact(a, b, number, &power, &factorial);

    printf("%f to power %d: %f\n", a, b, power);
    printf("Factorial of %d: %d\n", number, factorial);

    return 0;
}


void power_fact(float x, int y, int num, float *pow, int *fact)
{
    int i;
    float res = 1;

    for(i = 1; i <= y; i++)
        res *= x;

    *pow = res;

    res = 1;
    for(i = 1; i <= num; i++)
        res *= i;

    *fact = res;
}
