/* Calculate grade of steel */

# include <stdio.h>

int main()
{
    int hardness, tensile;
    float carbon;

    printf("Enter hardness, carbon content, tensile strength: ");
    scanf("%d %f %d", &hardness, &carbon, &tensile);

    if (hardness > 50 && carbon < 0.7 && tensile > 5600)
        printf("Grade 10\n");
    else if (hardness > 50 && carbon < 0.7)
        printf("Grade 9\n");
    else if (carbon < 0.7 && tensile > 5600)
        printf("Grade 8\n");
    else if (hardness > 50 && tensile > 5600)
        printf("Grade 7\n");
    else if (hardness > 50 || carbon < 0.7 || tensile > 5600)
        printf("Grade 6\n");
    else
        printf("Grade 5\n");

    return 0;
}
