/* Absolute value of number */

# include <stdio.h>

int main()
{
    int a;

    printf("Enter number: ");
    scanf("%d", &a);

    if (a >= 0)
        printf("Absolute value of %d is %d\n", a, a);
    else
        printf("Absolute value of %d is %d\n", a, -a);

    return 0;
}
