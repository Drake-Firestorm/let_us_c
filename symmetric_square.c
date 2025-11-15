/* Check if square matrix is symmetric */

#include <stdio.h>
#include <stdlib.h>

#define MAX 3

int main()
{
    int i, j;
    int mat1[MAX][MAX];

    i = MAX;
    printf("Enter elements of %d x %d matrix: ", i, i);
    for(i = 0; i < MAX; i++)
        for(j = 0; j < MAX; j++)
            scanf("%d", &mat1[i][j]);


    for(i = 0; i < MAX; i++)
    {
        for(j = 0; j < MAX; j++)
        {
            if(mat1[i][j] != mat1[j][i])
            {
                printf("Matrix is not symmetric at: %d %d\n", i, j);
                printf("Values at %d %d: %d\n", i, j, mat1[i][j]);
                printf("Values at %d %d: %d\n", j, i, mat1[j][i]);
                exit(1);
            }
        }
    }

    printf("Matrix is symmetric\n");

    return 0;
}
