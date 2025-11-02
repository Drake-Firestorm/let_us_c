/* Insertion Sort */

#include <stdio.h>

int main()
{
    int i, j, k, temp, max = 25;
    int arr[max];

    printf("Enter %d numbers: ", max);
    for(i = 0; i < max; i++)
        scanf("%d", &arr[i]);

    for(i = 1; i < max; i++)
    {
        // copy current value into temp variable
        temp = arr[i];

        for(j = 0; j < i; j++)
        {
            // if current value is smaller than value at j
            if(temp < arr[j])
            {
                // shift elements to right
                for(k = i; k >= j; k--)
                    arr[k] = arr[k - 1];    

                // copy current value to location j
                arr[j] = temp;
                break;
            }
        }
    }

    printf("Sorted array: ");
    for(i = 0; i < max; i++)
        printf("%d ", arr[i]);

    printf("\n");

    return 0;
}
