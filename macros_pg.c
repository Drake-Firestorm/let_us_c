/* Macros ISUPPER, ISLOWER, ISALPHA, BIG */

#include <stdio.h>

#define ISUPPER(x) (x >= 65 && x <= 90 ? 1 : 0)
#define ISLOWER(x) (x >= 97 && x <= 122 ? 1 : 0)
#define ISALPHA(x) (ISUPPER(x) || ISLOWER(x) ? 1 : 0)
#define BIG(x, y) (x >= y ? x : y)

int main()
{
    int d, a, b;
    char ch;

    printf("Enter any alphabet/character: ");
    scanf("%c", &ch);

    if(ISUPPER(ch) == 1)
        printf("You entered a capital letter\n");
    if(ISLOWER(ch) == 1)
        printf("You entered a small case letter\n");
    if(ISALPHA(ch) != 1)
        printf("You entered a character other than alphabet\n");

    printf("Enter any two numbers: ");
    scanf("%d %d", &a, &b);

    d = BIG(a, b);

    printf("Bigger number is %d\n", d);

    return 0;
}
