/* Compute value of one number raised to another */

# include <stdio.h>

float power(float, int);

int main()
{
    int num2;
    float num1, p;

    printf("Enter number and power: ");
    scanf("%f %d", &num1, &num2);

    p = power(num1, num2);

    printf("%f raised to %d is %f\n", num1, num2, p);
}

float power(float num1, int num2)
{
    int i;
    float p = 1;

    for (i = 1; i <= num2; i++)
        p *= num1;

    return (p);
}
