/* Calculate Body Mass Index (BMI) */

# include <stdio.h>

int main()
{
    float weight, height, bmi;

    printf("Enter weight (in kg) and height (in meters): ");
    scanf("%f %f", &weight, &height);

    bmi = weight / (height * height);

    if (bmi >= 40)
        printf("Morbidly Obese\n");
    else if (bmi >= 30)
        printf("Obese\n");
    else if (bmi >= 25)
        printf("Overweight\n");
    else if (bmi >= 18.6)
        printf("Ideal\n");
    else if (bmi >= 17.6)
        printf("Underweight\n");
    else if (bmi >= 15.1)
        printf("Anorexic\n");
    else if (bmi < 15)
        printf("Starvation\n");
    
    return 0;    
}
