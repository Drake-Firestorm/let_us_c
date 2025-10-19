/* Calculate smallest number of notes required to reach sum. */

# include <stdio.h>

int main()
{
    int denom1, denom2, denom3, denom4, denom5, denom6, sum, copy;
    int denom_count1, denom_count2, denom_count3, denom_count4, denom_count5, denom_count6, count;

    denom1 = 1;
    denom2 = 2;
    denom3 = 5;
    denom4 = 10;
    denom5 = 50;
    denom6 = 100;

    printf("Enter sum: ");
    scanf("%d", &sum);

    // copy
    copy = sum;

    /*
    calculate smallest number of notes required,
    by dividing by the largest remaining denomination,
    then dividing remainder by next largest denomination.
    */
    denom_count6 = copy / denom6;
    copy = copy % denom6;
    denom_count5 = copy / denom5;
    copy = copy % denom5;
    denom_count4 = copy / denom4;
    copy = copy % denom4;
    denom_count3 = copy / denom3;
    copy = copy % denom3;
    denom_count2 = copy / denom2;
    copy = copy % denom2;
    denom_count1 = copy / denom1;
    copy = copy % denom1;
    
    count = denom_count6 + denom_count5 + denom_count4 + denom_count3 + denom_count2 + denom_count1;

    printf("Smallest number of notes to get %d: %d\n", sum, count);

    return 0;
}
