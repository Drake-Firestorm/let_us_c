/* Moving pegs game */

#include <stdio.h>

void move(int, char, char, char);

int main()
{
    int n;

    n = 4;

    move(n, 'A', 'B', 'C');

    return 0;
}


void move(int n, char start, char alternate, char end)
{
    if(n == 0)
        return;
    else
    {
        move(n - 1, start, end, alternate);
        printf("Move disk %d from %c to %c\n", n, start, end);
        move(n - 1, alternate, start, end);
    }
}
