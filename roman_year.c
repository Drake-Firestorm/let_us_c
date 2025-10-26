/* Convert year to Roman equivalent */

# include <stdio.h>

void romanise(int);
int romanise_subyear(int, int, char);

int main()
{
    int year;

    printf("Enter year: ");
    scanf("%d", &year);

    romanise(year);

    return 0;
}


// Calculate roman year
void romanise(int yr)
{
    int copy = yr;
    
    copy = romanise_subyear(copy, 1000, 'M');
    copy = romanise_subyear(copy, 500, 'D');
    copy = romanise_subyear(copy, 100, 'C');
    copy = romanise_subyear(copy, 50, 'L');
    copy = romanise_subyear(copy, 10, 'X');
    copy = romanise_subyear(copy, 5, 'V');
    copy = romanise_subyear(copy, 1, 'I');

    printf("\n");
}


// Calculate roman equivalent for period
int romanise_subyear(int yr, int period, char ch)
{
    int i;
    
    for (i = 1; i <= yr / period; i++)
        printf("%c", ch);

    return (yr % period);
}
