/* Binary equivalent */

#include <stdio.h>

int to_binary(int);

int main()
{
    int num, binary;

    printf("Enter the number: ");
    scanf("%d", &num);

    binary = to_binary(num);

    printf("Binary of %d: %d\n", num, binary);

    return 0;
}


int to_binary(int number)
{
    int rem, binary;

    rem = number % 2;
    number /= 2;

    if(number == 0)
        return(rem);
    else    
        binary = rem + (10 * to_binary(number));

    return binary;
}
