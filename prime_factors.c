/* Prime factors of a number */

# include <stdio.h>
# include <math.h>

void prime(int, int);

int main()
{
    int num;
    
    printf("Enter number: ");
    scanf("%d", &num);

    printf("Prime factors of %d: ", num);
    prime(num, 2);

    printf("\n");

    return 0;
}


// prime factors
void prime(int num, int i)
{
    if(i <= num)
    {
        if(num % i == 0)
        {
            printf("%d ", i);
            prime(num / i, i);
        }
        else
            prime(num, ++i);
    }
}
