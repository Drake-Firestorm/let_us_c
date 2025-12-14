/* Engine part details */

#include <stdio.h>

#define MAX_PARTS 2

struct Engine
{
    int part_no, manu_year, quantity;
    char material[5];
};

void clear_input_buffer();
void get_data(struct Engine *);
void display(struct Engine *);

int main()
{
    struct Engine eng[MAX_PARTS];

    get_data(eng);

    display(eng);
    
    return 0;
}

void clear_input_buffer(){
    int c;
    while((c = getchar()) != '\n' && c != EOF);
}

void get_data(struct Engine *e)
{
    int i;

    for(i = 0; i < MAX_PARTS; i++)
    {
        printf("Enter details of engine parts:\n");
        while(1)
        {
            printf("Enter part number between AA0 and FF9: ");
            scanf("%x", &e[i].part_no);
            clear_input_buffer();

            if(e[i].part_no >= 0xAA0 && e[i].part_no <= 0xFF9)
                break;
        }

        printf("Enter manufacturing year: ");
        scanf("%d", &e[i].manu_year);

        clear_input_buffer();
        printf("Enter material used: ");
        scanf("%s", e[i].material);

        clear_input_buffer();
        printf("Enter quantity manufactured: ");
        scanf("%d", &e[i].quantity);
    }
}

void display(struct Engine *e)
{
    int i, j = 0;

    printf("All records between BB1 and CC6:\n");

    for(i = 0; i < MAX_PARTS; i++)
    {
        if(e[i].part_no >= 0xBB1 && e[i].part_no <= 0xCC6)
        {
            j = 1;
            printf(
                "Part no: %x, Manufacturing year: %d, Material: %s, Quantity: %d\n"
                , e[i].part_no, e[i].manu_year, e[i].material, e[i].quantity
            );
        }
    }

    if(j == 0)
        printf("No such record\n");
}
