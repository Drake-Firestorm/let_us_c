/* Multiply elements of array by 3 */

#include <stdio.h>

int * modify(int [], int );

int main()
{
    int i, max=10;
    int arr[max];

    printf("Enter %d elements: ", max);
    for(i = 0; i < max; i++)
        scanf("%d", &arr[i]);

    // pass address of first element
    // and max no of elements in array
    modify(arr, max);

    printf("Elements multiplied by 3: ");
    for(i = 0; i < max; i++)
        printf("%d ", arr[i]);

    printf("\n");

    return 0;
}


int * modify(int arr[], int n)
{
    int i;

    for(i = 0; i< n; i++)
        arr[i] *= 3;
    return arr;
}
