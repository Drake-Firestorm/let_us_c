/* Fibonacci words */

#include <stdio.h>
#include <string.h>

int main()
{
    int i;
    char f_1[10] = "A", f[10] = "B", temp[10];

    for(i = 0; i < 5; i++)
    {
        strcpy(temp, f);    // temp = current value
        strcat(f, f_1);     // current value += previous value
        strcpy(f_1, temp);  // previous value = temp

        printf("%s\n", f);
    }

    return 0;
}
