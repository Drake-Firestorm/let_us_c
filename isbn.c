/* Validate if ISBN is correct */

#include <stdio.h>

int main()
{
    int i, checksum = 0;
    char isbn[10];

    printf("Enter ISBN10: ");
    scanf("%s", isbn);

    // calculate weighted sum
    for(i = 0; i < 9; i++)
    {
        // convert isbn digit from ascii to number
        // multiply by it's weight
        checksum += ((isbn[i] - 48) * (10 - i));
    }

    // weighted sum modulo 11
    checksum %= 11;

    // calculate checksum
    // 0 if remainder is 0 else 11 - remainder
    if(checksum != 0)
        checksum = 11 - checksum;

    // 10 is denoted as "X" in checksum in ISBN
    if((isbn[9] == 'X') && checksum == 10)
        printf("ISBN %s is valid\n", isbn);
    else if(checksum == (isbn[9] - 48))
        printf("ISBN %s is valid\n", isbn);
    else
        printf("ISBN %s is not valid\n", isbn);

    return 0;
}
