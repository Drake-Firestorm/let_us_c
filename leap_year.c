/* Identify if year is leap year */

# include <stdio.h>

void leap_year(int);

int main()
{
    int year;

    printf("Enter year: ");
    scanf("%d", &year);

    leap_year(year);
    
    return 0;
}


// Leap year
void leap_year(int yr)
{

    if (
        (yr % 4 == 0)
        && (
            (yr % 400 == 0)
            || (yr % 100 != 0)
        )
    )
        printf("%d is a leap year\n", yr);
    else
        printf("%d is not leap year\n", yr);
}
