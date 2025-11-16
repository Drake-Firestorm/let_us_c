/* Convert string to integer */

#include <stdio.h>

int main()
{
    int s_num = 0;
    char str[10], *s_ptr;
    
    printf("Enter integer as string (max 10 chars): ");
    scanf("%s", str);

    s_ptr = str;

    while(*s_ptr != '\0')
    {
        if(*s_ptr < 48 || *s_ptr > 57)
        {
            printf("Not a valid string\n");
            s_num = -1;
            break;
        }
        s_num *= 10;
        s_num += (*s_ptr - 48);
        s_ptr++;
    }

    printf("Integer: %d\n", s_num);

    return 0;
}
