/* Count of positive, negative and zeros entered */

# include <stdio.h>

int main()
{
    int i, num[25], pos, neg, zero, min, max, even, odd;
    
    printf("Enter 25 numbers in array:");
    for(i = 0; i < 25; i++)
        scanf("%d", &num[i]);

    pos = neg = zero = even = odd = 0;
    min = max = num[0];
    
    for(i = 0; i < 25; i++)
    {
        if (num[i] > 0)
            pos ++;
        else if (num[i] < 0)
            neg ++;
        else if (num[i] == 0)
            zero ++;
        
        if (num[i] > max)
            max = num[i];

        if (num[i] < min)
            min = num[i];

        if(num[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Positive count: %d\n", pos);
    printf("Negative count: %d\n", neg);
    printf("Zero count: %d\n", zero);
    printf("Range of %d and %d: %d\n", min, max, max - min);
    printf("Even count: %d\n", even);
    printf("Odd count: %d\n", odd);

    return 0;
}
