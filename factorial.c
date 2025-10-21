/* Factorial of number */

# include <stdio.h>

int main()
{
    int i, num, fact;

    printf("Enter number: ");
    scanf("%d", &num);

    fact = i = 1;
    while(i <= num)
    {
        fact *= i;
        i += 1;
    }

    printf("Factorial of %d is %d\n", num, fact);
}
