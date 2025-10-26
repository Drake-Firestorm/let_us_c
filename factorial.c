/* Factorial of number */

# include <stdio.h>

int factorial(int );

int main()
{
    int i, num, fact;

    printf("Enter number: ");
    scanf("%d", &num);

    fact = factorial(num);

    printf("Factorial of %d is %d\n", num, fact);
}


int factorial(int num)
{
    int i, fact;

    fact = 1;
    for (i = 1; i <= num; i++)
        fact *= i;

    return (fact);
}
