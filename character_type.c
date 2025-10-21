/* Character type */

# include <stdio.h>

int main()
{
    char c;

    printf("Enter a character: ");
    scanf("%c", &c);

    if (c >= 65 && c <= 90)
        printf("Capital letter\n");
    else if (c >= 97 && c <= 122)
        printf("Small case letter\n");
    else if (c >= 48 && c <= 57)
        printf("Digit\n");
    else if (
        (c >= 0 && c <= 47)
        || (c >= 58 && c <= 64)
        || (c >= 91 && c <= 96)
        || (c >= 123 && c <= 127)
    )
        printf("Special symbol\n");
    
    return 0;
}
