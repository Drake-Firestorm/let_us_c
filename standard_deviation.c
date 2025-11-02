/* Standard deviation */

#include <stdio.h>
#include <math.h>

int main()
{
    int i, n = 15;
    float std = 0, mean = 0;
    int arr[] = {-6, -12, 8, 13, 11, 6, 7, 2, -6, -9, -10, 11, 10, 9, 2};

    for(i=0; i < n; i++)
        mean+= arr[i];
    mean /= n;

    for(i=0; i < n; i++)
        std += pow(arr[i] - mean, 2);
    std = sqrt(std) / n;

    printf("Array: ");
    for(i=0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\nMean: %f\n", mean);
    printf("Std: %f\n", std);

    return 0;
}
