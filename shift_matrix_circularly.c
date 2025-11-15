/* Shift circularly left */

#include <stdio.h>

int main()
{
    int i, j, k, temp;
    int mat1[4][5];

    // Enter elements
    printf("Enter the elements of 4x5 matrix: ");
    for(i = 0; i < 4; i++)
        for(j = 0; j < 5; j++)
            scanf("%d", &mat1[i][j]);
    
        
    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 5; j++)
            printf("%d", mat1[i][j]);

        printf("\n");
    }

    // left shift by 2
    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 2; j++)
        {
            temp = mat1[i][0];

            for(k = 0; k < 5; k++)
                mat1[i][k] = mat1[i][k + 1];

            mat1[i][4] = temp;
        }
    }


    // print the shifted elements
    printf("Enter the elements of matrix after shifting it circularly left by two\n");
    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 5; j++)
            printf("%d", mat1[i][j]);

        printf("\n");
    }

    return 0;
}
