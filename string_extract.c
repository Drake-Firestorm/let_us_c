/* Extract sub-string */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void clear_input_buffer();

int main()
{
    int i, max, start, len;
    
    printf("Enter length of string, start and length of sub-string: ");
    scanf("%d %d %d", &max, &start, &len);

    char str[max + 1], str2[len + 1], *s;

    printf("Enter string: ");
    clear_input_buffer();
    fgets(str, max + 1, stdin);

    s = str;    // attach pointer to string
    s += start; // move pointer to sub-string start

    // copy sub-string of length len into str2
    for(i = 0; i < len; i++)
    {
        str2[i] = *s;
        s++;
    }

    printf("%s\n", str2);
    
    return 0;
}

void clear_input_buffer(){
    int c;
    while((c = getchar()) != '\n' && c != EOF);
}
