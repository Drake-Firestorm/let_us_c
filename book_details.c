/* Book details */
#include <stdio.h>

void clear_input_buffer();

int main()
{
    struct book
    {
        char name;
        float price;
        int pages;
    };

    struct book b[10];
    int i, dh;

    for(i = 0; i < 10; i++)
    {
        printf("Enter names, prices and no. of pages\n");
        scanf("%c %f %d", &b[i].name, &b[i].price, &b[i].pages);
        clear_input_buffer();
    }

    printf("And this is what you entered\n");
    for(i = 0; i < 10; i++)
        printf("%c %f %d\n", b[i].name, b[i].price, b[i].pages);

    return 0;
}

void clear_input_buffer(){
    int c;
    while((c = getchar()) != '\n' && c != EOF);
}

