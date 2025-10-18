/* Calculation of simple interest */
/* Author: gekay Date: 25/09/2022 */
# include <stdio.h>
int main()
{
    int p, n;
    float r, si;

    printf("Enter values of p, n, r \n");
    scanf("%d %d %f", &p, &n, &r);
    
    /* formula for simple interest */
    si = p * n * r / 100;
    
    printf("%f \n", si);
    
    return 0;
}
