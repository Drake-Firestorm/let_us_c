/* Smallest number */

#include <stdio.h>

int main()
{
    int i, arr[25], smallest;

    printf("Enter 25 numbers: ");
    for(i = 0; i <= 25; i++)
        scanf("%d", &arr[i]);

    smallest = arr[0];

    for(i = 0; i <= 25; i++)
    {
        if(arr[i] < smallest)
            smallest = arr[i];
    }

    printf("Smallest number: %d\n", smallest);

    return 0;
}
