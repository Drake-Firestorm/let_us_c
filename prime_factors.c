/* Prime factors of a number */

# include <stdio.h>
# include <math.h>

void prime(int);

int main()
{
    int num;
    
    printf("Enter number: ");
    scanf("%d", &num);

    printf("Prime factors of %d: ", num);
    prime(num);

    printf("\n");

    return 0;
}


// prime factors
void prime(int num)
{
    int i, j, copy = num;

    for(i = 2; i <= copy; i++)
    {
        for(j = 1; j <= copy; j++)
        {
            if(copy % i == 0)
            {
                printf("%d ", i);
                copy /= i;
            }
            else
                break;
        }
    }
}
