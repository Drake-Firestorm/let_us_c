/* Check if the second half of an array is mirror image of first half */

#include <stdio.h>

int main()
{
    int i, j, n;

    printf("Enter max size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements of the array: ");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for(i = 0, j = n - 1; i <= n/2; i++, j--)
    {
        if(arr[i] == arr[j])
            printf("%d and %d are equal to %d\n", i, j, arr[i]);
        else
            printf("%d (%d) and %d (%d) are not equal\n", i, arr[i], j, arr[j]);
    }

    return 0;
}
