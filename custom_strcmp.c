/* Program to demonstrate printing of a string */

#include <stdio.h>
#include <string.h>

int xstrcmp(char *, char *);

int main()
{
    int i, j, k;
    char name[25] = "Bamboozled", tar[30] = "Test";
    
    i = xstrcmp(tar, "Test");
    j = xstrcmp(tar, name);
    k = xstrcmp(tar, "Test box");
    
    printf("%d %d %d\n", i, j, k);

    return 0;
}


int xstrcmp(char *t, char *s)
{
    int i = 0;

    while(*t != '\0' || *s != '\0')
    {
        if(*t == *s)
        {
            *t++; *s++;
        }
        else
        {
            i = *t - *s;
            break;
        }
    }
    
    return i;
}
