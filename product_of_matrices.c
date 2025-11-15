/* Multiply two 3 x 3 matrices */

#include <stdio.h>

#define MAX 3

int main()
{
    int i, j;
    int mat1[MAX][MAX], mat2[MAX][MAX], mat3[MAX][MAX];


    // Enter elements of the two matrices
    i = MAX;
    printf("Enter elements of first %d x %d matrix: ", i, i);
    for(i = 0; i < MAX; i++)
        for(j = 0; j < MAX; j++)
            scanf("%d", &mat1[i][j]);

    printf("Enter elements of second %d x %d matrix: ", i, i);
    for(i = 0; i < MAX; i++)
        for(j = 0; j < MAX; j++)
            scanf("%d", &mat2[i][j]);

    
    // multiply matrices
    for(i = 0; i < MAX; i++)
        for(j = 0; j < MAX; j++)
            mat3[i][j] = mat1[i][j] * mat2[i][j];
    
    
    // print product
    printf("Product of two matrices is:\n");
    for(i = 0; i < MAX; i++)
    {
        for(j = 0; j < MAX; j++)
            printf("%d ", mat3[i][j]);
        
        printf("\n");
    }

    return 0;
}
