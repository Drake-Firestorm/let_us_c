/* Expected Salary */

# include <stdio.h>

int main()
{
    char sex, quali;
    int years;

    printf("Enter years of service, gender, qualifications (g/p): ");
    scanf("%d %c %c", &years, &sex, &quali);

    if(sex == 'm' && years >= 10 && quali == 'p')
        printf("Salary is 11000\n");
    else if(
        (sex == 'm' && years >= 10 && quali == 'g')
        || (sex == 'm' && years < 10 && quali == 'p')
        || (sex == 'f' && years < 10 && quali == 'p')
    )
        printf("Salary is 10000\n");
    else if (sex == 'm' && years < 10 && quali == 'g')
        printf("Salary is 7000\n");
    else if(sex == 'f' && years >= 10 && quali == 'p')
        printf("Salary is 12000\n");
    else if(sex == 'f' && years >= 10 && quali == 'g')
        printf("Salary is 9000\n");
    else if(sex == 'f' && years < 10 && quali == 'g')
        printf("Salary is 6000\n");
}