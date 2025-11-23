/* Delete the word "the" */

#include <stdio.h>
#include <string.h>

#define MAX 80

int main()
{
    int i;
    char *s, *s1, *t;
    char temp[4], str[MAX], str1[MAX];

    printf("Enter the string: ");
    fgets(str, sizeof str, stdin);

    // remove newline char at end
    i = strlen(str);
    if(str[i - 1] == '\n')
        str[i - 1] = '\0';

    s = str;
    s1 = str1;
    t = temp;
    
    while(*s)
    {
        for(i = 0; i < 3 ; i++)
            *t++ = *s++;
        *t = '\0';

        t -= 3; //reset pointer to start
        
        if(strcmp(temp, "the") != 0)
        {
            s -= 3; // rollback 3 elements

            *s1++ = *s++;
        }
    }

    *s1 = '\0';

    puts(str1);

    return 0;
}
