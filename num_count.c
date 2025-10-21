/* Count of positive, negative and zeros entered */

# include <stdio.h>

int main()
{
    int num, pos, neg, zero, min, max;
    char ans;

    pos = neg = zero = min = max = 0;
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
        
        if (num > max)
            max = num;

        if (num < min)
            min = num;

        printf("Continue (y/n): ");
        scanf(" %c", &ans);
    }

    printf("Positive count: %d\n", pos);
    printf("Negative count: %d\n", neg);
    printf("Zero count: %d\n", zero);
    printf("Range of %d and %d: %d\n", min, max, max - min);

    return 0;
}
