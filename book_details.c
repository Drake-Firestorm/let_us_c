/* Passing individual structure elements */
#include <stdio.h>

struct book     // declare globally to use in functions
{
    char name[25], author[25];
    int pages;
};

void display1(char *, char *, int);
void display2(struct book);
void display3(struct book *);

int main()
{
    struct book b1 = {"Let Us C", "YPK", 464};
    
    display1(b1.name, b1.author, b1.pages); // mixed call - reference & value
    display2(b1);   // struct variable
    display3(&b1);  // struct pointer

    return 0;
}

void display1(char *n, char *a, int pg)
{
    printf("%s %s %d\n", n, a, pg);
}


void display2(struct book b)
{
    printf("%s %s %d\n", b.name, b.author, b.pages);
}


void display3(struct book *pb)
{
    printf("%s %s %d\n", pb->name, pb->author, pb->pages);  // struct pointer -> struct elements
}
