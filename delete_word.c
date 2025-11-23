/* Delete the word "the" */

#include <stdio.h>
#include <string.h>

#define MAX 80

int main()
{
    int i, j, k;
    char temp[4], str[MAX], str1[MAX];

    printf("Enter the string: ");
    fgets(str, sizeof str, stdin);

    for(i = 0, k = 0; i < strlen(str) - 1; i++)
    {
        *temp = '\0';

        for(j = 0; j < 3 ; j++)
            temp[j] = str[i + j];

        temp[j] = '\0';

        if(strcmp(temp, "the") != 0)
        {
            str1[k] = str[i];
            k++;
        }
        else
            i += 2;
    }

    str1[k] = '\0';

    printf("%s\n", str1);

    return 0;
}
