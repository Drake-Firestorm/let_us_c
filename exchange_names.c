/* Exchange names using 2-D array of characters */

#include <stdio.h>

int main()
{
    char *t, *names[] = {"akshay", "parag", "raman", "srinivas", "gopal", "rajesh"};

    printf("Original: %s %s\n", names[2], names[3]);

    t = names[2];
    names[2] = names[3];
    names[3] = t;

    printf("New: %s %s\n", names[2], names[3]);
    
    return 0;
}
