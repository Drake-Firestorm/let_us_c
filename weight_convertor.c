/* Weight convertor */

#include <stdio.h>

void weight_convertor(float, float *, float *, float *);

int main()
{
    float kg, gm, ton, pound;

    printf("Enter weight in Kilograms: ");
    scanf("%f", &kg);

    weight_convertor(kg, &gm, &ton, &pound);

    printf("Weight in Grams: %f\n", gm);
    printf("Weight in Tons: %f\n", ton);
    printf("Weight in Pound: %f\n", pound);

    return 0;
}


void weight_convertor(float k, float *g, float *t, float *p)
{
    *g = k * 1000;
    *t = k / 1000;
    *p = k * 2.2;
}
