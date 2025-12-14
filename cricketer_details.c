/* Cricketer details */

#include <stdio.h>
#include <stdlib.h>

#define MAX_CRICKETERS 2
#define NAME_LEN 50

struct Cricketer
{
    int age, no_of_tests;
    float avg_runs;
    char name[NAME_LEN];
};

void clear_input_buffer();
void get_data(struct Cricketer *);
int cmp_avg_runs(const void *, const void *);
void display(struct Cricketer *);

int main()
{
    struct Cricketer ck[MAX_CRICKETERS];

    get_data(ck);

    qsort(ck, MAX_CRICKETERS, sizeof *ck, cmp_avg_runs);

    display(ck);
    
    return 0;
}

void clear_input_buffer(){
    int c;
    while((c = getchar()) != '\n' && c != EOF);
}

void get_data(struct Cricketer *c)
{
    int i;

    for(i = 0; i < MAX_CRICKETERS; i++)
    {
        printf("Enter name of cricketer: ");
        scanf("%s", c[i].name);
        clear_input_buffer();

        printf("Enter age: ");
        scanf("%d", &c[i].age);

        printf("Enter no. of test matches: ");
        scanf("%d", &c[i].no_of_tests);

        printf("Enter average runs: ");
        scanf("%f", &c[i].avg_runs);
    }
}

int cmp_avg_runs(const void *a, const void *b)
{
    const struct Cricketer *ca = a;
    const struct Cricketer *cb = b;

    return (ca -> avg_runs - cb -> avg_runs);
}

void display(struct Cricketer *c)
{
    int i;

    printf("Cricketer details: \n");
    for(i = 0; i < MAX_CRICKETERS; i++)
        printf(
            "Name: %s, Age: %d, No. of Test matches: %d, Avg. runs: %f\n"
            , c[i].name, c[i].age, c[i].no_of_tests, c[i].avg_runs
        );
}
