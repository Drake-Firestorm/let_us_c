/* Calculate stats */

# include <stdio.h>
# include <math.h>

void stats(int *, int *, double *);


int main()
{
    int sum, avg;
    double stdev;

    stats(&sum, &avg, &stdev);

    printf(
        "Sum = %d \nAverage = %d \nStandard deviation = %lf\n"
        , sum, avg, stdev
    );

    return 0;
}


void stats(int *sum, int *avg, double *stdev)
{
    int num1, num2, num3, num4, num5;

    printf("Enter 5 numbers: ");
    scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);

    *sum = num1 + num2 + num3 + num4 + num5;
    *avg = *sum / 5;
    *stdev = sqrt(
        (
            pow((num1 - *avg), 2.0) + pow((num2 - *avg), 2.0) + \
            pow((num3 - *avg), 2.0) + pow((num4 - *avg), 2.0) + \
            pow((num5 - *avg), 2.0)
        ) / (5 - 1)
    );
}
