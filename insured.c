/* Insurance eligibility */

# include <stdio.h>

int main()
{
    int age;
    char sex, married;

    printf("Enter age, sex (m/f), and marital status (y/n): ");
    scanf("%d %c %c", &age, &sex, &married);

    if (
        (married == 'y')
        || (married == 'n' && sex == 'm' && age > 30)
        || (married == 'n' && sex == 'f' && age > 25)
    )
        printf("Insured\n");
    else
        printf("Not insured\n");

    return 0;
}
