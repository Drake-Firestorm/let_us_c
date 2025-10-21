/* Convert to Octal */

# include <stdio.h>
# include <math.h>

int main()
{
    int num, copy, octal;

    printf("Enter a number: ");
    scanf("%d", &num);

    copy = num;
    octal = 0;

    while (copy > 0)
    {
        octal *= 10;

        octal += copy % 8;
        copy /= 8;
    }
    
    copy = octal;
    octal = 0;

    while (copy > 0)
    {
        octal *= 10;
        
        octal += copy % 10;
        copy /= 10;
    }

    printf("Octal of %d: %d\n", num, octal);

    return 0;
}
