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
    int copy, binary, digit, counter;

    copy = number;
    binary = digit = counter = 0;

    while(copy > 0)
    {
        if(copy % 2 == 1)
            digit++;
        
        binary *= 10;
        binary += copy % 2;
        copy /= 2;

        counter++;
    }

    if(digit > 1)
    {
        copy = binary;
        binary = 0;

        while(copy > 0)
        {
            binary *= 10;
            binary += copy % 10;
            copy /= 10;
        }
    }
    else
    {
        counter--;
        
        while(counter > 0)
        {
            binary *= 10;
            counter--;
        }
    }
    
    return (binary);
}
