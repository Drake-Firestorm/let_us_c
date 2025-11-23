/* Delete all vowels */

#include <stdio.h>
#include <string.h>

#define MAX 80

int is_vowel(char c);

int main()
{
    int len, i, j;
    char str[MAX], str1[MAX];

    printf("Enter string (max %d characters): ", MAX - 1);
    fgets(str, sizeof str, stdin);

    for(i = 0, j = 0; i < strlen(str) - 1; i++)
        if(!is_vowel(str[i]))
        {
            str1[j] = str[i];
            j++;
        }
    str1[j] = '\0';

    printf("%s\n", str1);
    
    return 0;
}


int is_vowel(char ch)
{
    const char vowels[] = "aeiouAEIOU";

    /* strchr scans the string for the first occurrence of ch.
       It returns NULL if the character is not found. */
    return (strchr(vowels, ch) != NULL);
}
