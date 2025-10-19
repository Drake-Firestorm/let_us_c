/* Calculate wind-chill factor */

# include <stdio.h>
# include <math.h>

int main()
{
    float t, v, wcf;

    printf("Enter temperature: ");
    scanf("%f", &t);

    printf("Enter wind velocity: ");
    scanf("%f", &v);

    // wind-chill factor
    wcf = 35.74 + 0.6215 * t + (0.4275 * t - 35.75) * pow(v, 0.16);

    printf("Wind-chill factor: %f\n", wcf);

    return 0;    
}
