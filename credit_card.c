/* Validate credit card number */

#include <stdio.h>

#define MAX 17

int main()
{
    int i, sum_odd = 0, sum_even = 0;
    char digit, card[MAX] = "4567123456789129";

    for(i = 0; i < MAX - 1; i += 2)
    {
        // double every second digit
        digit = (card[i] - '0') * 2;
        
        // if doubled digit greater than equal to 10
        // subtract 9
        if(digit >= 10)
            digit -= 9;
        
        // sum digit
        sum_odd += digit;

        // sum even digits
        sum_even += (card[i + 1] - '0');
    }

    if((sum_even + sum_odd) % 10 == 0)
        printf("Credit card number %s is valid\n", card);
    else
        printf("Credit card number %s is not valid\n", card);

    return 0;
}
