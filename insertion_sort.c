/* Insertion Sort */

#include <stdio.h>

int main()
{
    int i, j, k, l, max = 25;
    int arr[max], temp[max];

    printf("Enter %d numbers: ", max);
    for(i = 0; i < max; i++)
        scanf("%d", &arr[i]);

    if(arr[1] < arr[0])
    {
        i = arr[0];
        arr[0] = arr[1];
        arr[1] = i;
    }

    for(i = 2; i < max; i++)
    {
        for(j = 0; j < i; j++)
        {
            // if current value is smallest
            if(arr[i] < arr[j])
            {
                // copy all values upto j-1
                for(k = 0; k < j; k++)
                    temp[k] = arr[k];

                // copy current value to temp array at location j
                temp[j] = arr[i];
                
                // copy remaining values starting from location j+1
                for(k = j + 1, l = j; k < max; k++, l++)
                {
                    // if value to be copied is i
                    // skip value
                    // and retain current value of k
                    if(l == i)
                    {
                        k--;
                        continue;
                    }
                    temp[k] = arr[l];
                }

                // write back to original array
                for(j = 0; j < max; j++)
                    arr[j] = temp[j];
            }
        }
    }

    printf("Sorted array: ");
    for(i = 0; i < max; i++)
        printf("%d ", arr[i]);

    printf("\n");

    return 0;
}
