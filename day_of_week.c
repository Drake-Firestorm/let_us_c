/* Find day of week */

# include <stdio.h>

int main()
{
    int leapdays, firstday, year;
    long int normaldays, totaldays;

    printf("Enter year: ");
    scanf("%d", &year);

    normaldays = (year - 1) * 365L;
    leapdays = (year - 1) / 4 - (year - 1) / 100 + (year - 1) / 400;

    totaldays = normaldays + leapdays;

    firstday = totaldays % 7;

    if (firstday == 0)
        printf("Monday\n");
    if (firstday == 1)
        printf("Tuesday\n");
    if (firstday == 2)
        printf("Wednesday\n");
    if (firstday == 3)
        printf("Thursday\n");
    if (firstday == 4)
        printf("Friday\n");
    if (firstday == 5)
        printf("Saturday\n");
    if (firstday == 6)
        printf("Sunday\n");

    return 0;
}
