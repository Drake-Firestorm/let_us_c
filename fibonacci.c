/* Fibonacci sequence */

#include <stdio.h>

int fibonacci(int);

int main()
{
    int i, n, num;

    printf("Enter number of Fibonacci sequence: ");
    scanf("%d", &num);

    n = 0;
    for(i = 1; i <= num; i++)
    {
        printf("%d ", fibonacci(n));
        n++;
    }
    
    printf("\n");

    return 0;
}


int fibonacci(int n)
{
    if(n == 0 || n == 1)
        return n;
    else
        return (fibonacci(n - 1) + fibonacci(n - 2));
}
