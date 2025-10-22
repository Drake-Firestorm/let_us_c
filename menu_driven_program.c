/* Menu driven program */

# include <stdio.h>
# include <stdlib.h>

int main()
{
    int choice, num, i, value, test;

    while (1)
    {
        printf("\
            Enter a choice (1-4): \n \
            1. Factorial of a number \n \
            2. Prime or not \n \
            3. Odd or even \n \
            4. Exit \n \
        ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter a number: ");
                scanf("%d", &num);

                value = 1;

                for (i = 1; i <= num; i++)
                    value *= i;

                printf("Factorial of %d: %d\n", num, value);
            
                break;
            
            case 2:
                printf("Enter a number: ");
                scanf("%d", &num);

                test = 0;
                for (i = 2; i <= num/2; i++)
                {
                    if (num % i == 0)
                    {
                        printf("%d is not prime\n", num);
                        test = 1;
                        break;
                    }
                }
                if (test == 0)
                    printf("%d is prime\n", num);
                
                break;
            
            case 3:
                printf("Enter a number: ");
                scanf("%d", &num);

                if (num % 2 == 0)
                    printf("%d is even\n", num);
                else
                    printf("%d is odd\n", num);

                break;
            
            case 4:
                exit(0);
            
            default:
                printf("Wrong choice\n");
                fflush(stdin);
        }
    }

    return 0;
}
