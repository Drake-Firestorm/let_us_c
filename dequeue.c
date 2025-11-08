/* Dequeue */

#include <stdio.h>
#include <stdlib.h>

#define MAX 5


// global variables
int arr[MAX];       // queue
int *left, *right;  // pointer to access left most and right most variable


// functions
void insert_left();
void insert_right();
void retrieve_left();
void retrieve_right();
void display();
void clear_input_buffer();


int main()
{
    int choice;

    left = right = NULL;

    while(1)
    {
        printf(
            "Enter a choice (1-4):\n"
            "1. Insert left\n"
            "2. Insert right\n"
            "3. Retrieve left\n"
            "4. Retrieve right\n"
            "5. Display queue\n"
            "6. Exit\n"
        );
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                insert_left();
                break;
            case 2:
                insert_right();
                break;
            case 3:
                retrieve_left();
                break;
            case 4:
                retrieve_right();
                break;
            case 5:
                display();
                break;
            case 6:
                exit(0);
            default:
                printf("Wrong choice\n");
                clear_input_buffer();            
        }
    }

    return 0;
}


void insert_left()
{
    int i, j, num;

    if((left != NULL) && ((right - left) == (MAX - 1)))
        printf("Queue full\n");
    else
    {
        printf("Enter number: ");
        scanf("%d", &num);
        
        if(left == NULL)
        {
            left = right = arr;
            *(left + 0) = num;
        }
        else
        {
            left = arr;
            j = right - left;

            for(i = j + 1; i > 0; i--)
                left[i] = left[i - 1];
            *(left + 0) = num;
            right++;
        }
    }
}


void insert_right()
{
    int i, j, num;

    if((left != NULL) && ((right - left) == (MAX - 1)))
        printf("Queue full\n");
    else
    {
        printf("Enter number: ");
        scanf("%d", &num);
        
        if(left == NULL)
        {
            left = right = arr;
            *(left + 0) = num;
        }
        else
        {
            left = arr;
            j = right - left;
            
            *(right + 1) = num;
            right++;
        }
    }
}


void retrieve_left()
{
    int i, j, temp;

    if(left == NULL)
        printf("Queue is empty\n");
    else
    {
        left = arr;
        j = right - left;

        printf("Left element is %d\n", *left);

        if (j == 0)
            left = right = NULL;
        else
        {
            for(i = 0; i <= j; i++)
                left[i] = left[i + 1];
            right--;
        }
    }
}


void retrieve_right()
{
    int temp;

    if(left == NULL)
        printf("Queue is empty\n");
    else
    {
        printf("Right element is %d\n", *right);
        if ((right - left) == 0)
            left = right = NULL;
        else
            right--;
    }
}


void display()
{
    int i;
    int j = right - left;

    if (left == NULL)
        printf("Queue is empty\n");
    else
    {
        printf("Elements in queue: ");
        for(i = 0; i <= j; i++)
            printf("%d ", arr[i]);
        printf("\n");
    }
}


// clear input buffer
void clear_input_buffer(){
    int c;
    while((c = getchar()) != '\n' && c != EOF);
}
