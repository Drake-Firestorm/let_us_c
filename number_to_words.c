/* Number in words */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void numbers(char );
void qualifier(int );
void tens_series(const char );
void multiples_of_ten(const char );
int check_num(char *, int , int );

int main()
{
    long int i;

    printf("Enter number: ");
    scanf("%ld", &i);

    // pos is arithmetic position; i.e. 0 = units, 1 = 10's, 2 = 100's, etc...
    int len, pos;
    char *n = NULL, num[12];
    
    // store number as string
    snprintf(num, sizeof(num), "%ld", i);

    n = num;
    len = strlen(num);

    int j = 0;
        
    while(*n != '\0')
    {
        pos = len - (n - num);
        
        // handle 10-19 and multiples of 10 from 20-90
        if(pos == 2 || pos == 5 || pos == 8)
        {
            // handle ten to nineteen
            if(*n == '1')
            {
                n++; pos--;
                tens_series(*n);
            }
            else
                multiples_of_ten(*n);
        }
        else
            numbers(*n);

        if(*n == '0')
        {
            if(
                ((pos % 3 == 1) && check_num(n, pos, len) == 1)
                || (pos % 3 != 1)
            )
            {
                n++;
                continue;
            }
        }
        
        qualifier(pos);
        n++;
    }
    printf("\n");

    return 0;
}

void numbers(const char ch)
{
    switch(ch)
    {
        case '0':
            break;
        case '1':
            printf("One ");
            break;
        case '2':
            printf("Two ");
            break;
        case '3':
            printf("Three ");
            break;
        case '4':
            printf("Four ");
            break;
        case '5':
            printf("Five ");
            break;
        case '6':
            printf("Six ");
            break;
        case '7':
            printf("Seven ");
            break;
        case '8':
            printf("Eight ");
            break;
        case '9':
            printf("Nine ");
            break;
        default:
            printf("Error");
            exit(1);
    }
}


void tens_series(const char ch)
{
    switch(ch)
    {
        case '0':
            printf("Ten ");
            break;
        case '1':
            printf("Eleven ");
            break;
        case '2':
            printf("Twelve ");
            break;
        case '3':
            printf("Therteen ");
            break;
        case '4':
            printf("Fourteen ");
            break;
        case '5':
            printf("Fiveteen ");
            break;
        case '6':
            printf("Sixteen ");
            break;
        case '7':
            printf("Seventeen ");
            break;
        case '8':
            printf("Eightteen ");
            break;
        case '9':
            printf("Nineteen ");
            break;
        default:
            printf("Error");
            exit(1);
    }
}


void multiples_of_ten(const char ch)
{
    switch(ch)
    {
        case '0':
        case '1':
            break;
        case '2':
            printf("Twenty ");
            break;
        case '3':
            printf("Thirty ");
            break;
        case '4':
            printf("Forty ");
            break;
        case '5':
            printf("Fifty ");
            break;
        case '6':
            printf("Sixty ");
            break;
        case '7':
            printf("Seventy ");
            break;
        case '8':
            printf("Eighty ");
            break;
        case '9':
            printf("Ninety ");
            break;
        default:
            printf("Error");
            exit(1);
    }
}


int check_num(char *ch, int p, int l)
{
    int i, max;
    
    if(l - p > 2)
        max = 2;
    else
        max = l - p;
    
    for(i = 0; i < max; i++)
    {
        ch--; p++;

        if(*ch != '0')
        {
            ch += i;
            return 0;
        }
    }

    return 1;
}


void qualifier(int pos)
{
    switch(pos)
    {
        case 7:
            printf("Million ");
            break;
        case 4:
            printf("Thousand ");
            break;
        case 9:
        case 6:
        case 3:
            printf("Hundred ");
            break;
        case 8:
        case 5:
        case 2:
        case 1:
            break;
        default:
            printf("Error");
            exit(1);
    }
}
