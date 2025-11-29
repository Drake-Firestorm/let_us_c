/* Abbreviates the first and middle name */

#include <stdio.h>
#include <stdlib.h>

#define MAX_BUFFER 50
#define MAX_NAMES 2

void abbreviate(const char *, char **);

int main()
{
    int i;

    char *names1[30] = {NULL};
    char *names[] = {
        "akshay parag srinivas", "parag rajesh gopal"
    };

    for(i = 0; i < MAX_NAMES; i++)
        abbreviate(names[i], &names1[i]);

    printf("Original names:\n");
    for(i = 0; i < MAX_NAMES; i++)
        printf("%s\n", names[i]);

    printf("\nAbbreviated names:\n");
    for(i = 0; i < MAX_NAMES; i++)
        printf("%s\n", names1[i]);

    return 0;
}


void abbreviate(const char *s, char **tar)
{
    int i = 0;
    char *t;
    
    // allocate memory to buffer
    *tar = malloc(MAX_BUFFER);

    // asign easy alias
    t = *tar;

    while(*s != '\0')
    {
        // assign first letter of first and middle name
        *t = *s;
        s++; t++;

        // skip rest of the word for first and middle name
        while(*s != ' ' && i < 2)
            s++;

        // add period followed by space for first and middle name
        if(*s == ' ')
        {
            *t = '.'; t++;
            *t++ = *s++;
        }

        i++;    // name counter
    }

    *t = '\0';
}
