/* Aggregate and percentage marks calculation */

# include <stdio.h>

int main()
{
    float max_marks, agg, perc;
    float sub1, sub2, sub3, sub4, sub5;

    max_marks = 100;

    printf("Enter marks of 5 subjects:\n");
    scanf("%f %f %f %f %f", &sub1, &sub2, &sub3, &sub4, &sub5);

    /* aggregate and percentage marks */
    agg = sub1 + sub2 + sub3 + sub4 + sub5;
    perc = agg / (max_marks * 5) * 100;

    printf("Aggregate marks: %f\n", agg);
    printf("Percentage marks: %f\n", perc);

    if (perc >= 60)
        printf("First division\n");
    else
    {
        if (perc >= 50)
            printf("Second division\n");
        else
        {
            if (perc >= 40)
                printf("Third division\n");
            else
                printf("Fail\n");
        }
    }
    
    return 0;
}
