/* Delete all vowels */

#include <stdio.h>
#include <string.h>

#define MAX 80

int is_vowel(char c);

int main()
{
    int len;
    char *s, *s1;
    char str[MAX], str1[MAX];

    printf("Enter string (max %d characters): ", MAX - 1);
    fgets(str, sizeof str, stdin);

    // strip newline at end
    len = strlen(str);
    if(str[len - 1] == '\n')
        str[len - 1] = '\0';

    s = str;
    s1 = str1;

    while(*s)
    {
        if(!is_vowel(*s))
            *s1++ = *s++;
        else
            s++;
    }

    *s1 = '\0';

    puts(str1);
    
    return 0;
}


int is_vowel(char ch)
{
    const char vowels[] = "aeiouAEIOU";

    /* strchr scans the string for the first occurrence of ch.
       It returns NULL if the character is not found. */
    return (strchr(vowels, ch) != NULL);
}
