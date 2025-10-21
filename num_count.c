/* Count of positive, negative and zeros entered */

# include <stdio.h>

int main()
{
    int num, pos, neg, zero;
    char ans;

    pos = neg = zero = 0;
    ans = 'y';
    while (ans == 'y')
    {
        printf("Enter number: ");
        scanf("%d", &num);

        if (num > 0)
            pos ++;
        else if (num < 0)
            neg ++;
        else if (num == 0)
            zero ++;
        
        printf("Continue (y/n): ");
        scanf(" %c", &ans);
    }

    printf("Positive count: %d\n", pos);
    printf("Negative count: %d\n", neg);
    printf("Zero count: %d\n", zero);

    return 0;
}
