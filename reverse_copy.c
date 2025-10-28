/* Program to copy one array into another in reverse order */

#include <stdio.h>

int main()
{
    int arr1[5], arr2[5], i, j;

    printf("Enter 5 elements of array: ");
    for(i = 0; i <= 4; i++)
        scanf("%d", &arr1[i]);

    for(i = 0, j = 4; i <= 4; i++, j--)
        arr2[j] = arr1[i];

    printf("Print elements in reverse order: ");
    for(i = 0; i <= 4; i++)
        printf("%d ", arr2[i]);

    printf("\n");

    return 0;
}
