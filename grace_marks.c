/* Grace marks */

# include <stdio.h>

int main()
{
    int class, failed;

    printf("Enter class obtained by student (1-3) and number of subjects failed in: ");
    scanf("%d %d", &class, &failed);

    switch(class)
    {
        case 1:
            if (failed > 3)
                printf("No grace marks\n");
            else
                printf("%d grace marks\n", 5 * failed);\
            break;

        case 2:
            if (failed > 2)
                printf("No grace marks\n");
            else
                printf("%d grace marks\n", 4 * failed);
            break;
            
        case 3:
            if (failed > 1)
                printf("No grace marks\n");
            else
                printf("5 grace marks\n");
            break;
            
        default:
            printf("Wrong class\n");
    }
}
