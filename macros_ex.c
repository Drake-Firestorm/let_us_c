/* Macro definitions */

#include <stdio.h>

#define MEAN(num1, num2) ((num1 + num2) / 2.0)
#define ABS(num) (num >= 0 ? num : -num)
#define LOWER(ch) (ch >= 65 && ch <= 90 ? ch + 32 : ch)
#define MAX(num1, num2, num3) (\
    (num1 >= num2 && num1 >= num3) ? num1 : \
    ((num2 >= num1 && num2 >= num3) ? num2 : num3) \
)

void clear_input_buffer();

int main()
{
    int n1, n2, n3, abs, largest;
    float mean;
    char ch, lower;

    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &n1, &n2, &n3);
    clear_input_buffer();

    printf("Enter capital letter: ");
    fflush(stdin);
    scanf("%c", &ch);

    mean = MEAN(n1, n2);
    abs = ABS(n1);
    lower = LOWER(ch);
    largest = MAX(n1, n2, n3);

    printf("Mean of %d and %d: %f\n", n1, n2, mean);
    printf("Absolute of %d: %d\n", n1, abs);
    printf("%c converted to lowercase: %c\n", ch, lower);
    printf("Largest of %d, %d, %d: %d\n", n1, n2, n3, largest);

    return 0;
}


void clear_input_buffer(){
    int c;
    while((c = getchar()) != '\n' && c != EOF);
}
