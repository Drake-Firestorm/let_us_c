/* Program to demonstrate printing of a string */

#include <stdio.h>
#include <string.h>

int xstrcat(char *, char *);

int main()
{
    int i, j, k;
    char name[25] = "Bamboozled", tar[30] = "Test";
    
    i = xstrcat(tar, name);
    
    printf("s %s\n", name);
    printf("t %s\n", tar);

    return 0;
}


int xstrcat(char *t, char *s)
{
    // char *x = t;

    while(*t != '\0')
        t++;
    
    while(*s != '\0')
    {
        *t = *s;
        s++;
        t++;
    }

    *t = '\0';
}
