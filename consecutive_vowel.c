/* Consecutive vowel count */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 50

int is_vowel(char );

int main()
{
    int count = 0, pos = 0;
    char *s = NULL, *str = malloc(MAX_LEN);

    printf("Enter string: ");
    fgets(str, MAX_LEN, stdin);

    s = str;

    while(*s != '\0')
    {
        pos = 0;
        if(is_vowel(*s))
        {
            s++;
            if(is_vowel(*s) && (*s != '\0'))
                count++;
            s--;
        }
        s++;        
    }

    printf("String contains %d consecutive vowels\n", count);

    return 0;
}


int is_vowel(char ch)
{
    const char vowels[] = "aeiouAEIOU";
    return (strchr(vowels, ch) != NULL);
}
