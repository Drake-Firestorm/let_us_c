/* Implementation of stack using a linked list */

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;           // value stored in this stack element
    struct node *link;  // pointer to the next node (the element below it)
};

void push(struct node **s, int item);
int pop(struct node **s);

int main()
{
    struct node *top;   // stack head
    int item;
    
    top = NULL;         // start with an empty stack

    push(&top, 45);
    push(&top, 28);
    push(&top, 63);
    push(&top, 55);

    item = pop(&top);
    printf("Poppped: %d\n", item);
    item = pop(&top);
    printf("Poppped: %d\n", item);

    return 0;
}

void push(struct node **s, int item)
{
    struct node *q;
    q = (struct node *) malloc(sizeof(struct node));    // allocate a new node
    q -> data = item;                                   // store the value
    q -> link = *s;                                     // link to previous top
    *s = q;                                             // update the stack top
}

int pop(struct node **s)
{
    int item;
    struct node *q;

    if(*s == NULL)                      // empty stack?
        printf("Stack is empty\n");
    else
    {
        q = *s;                         // node to remove
        item = q -> data;               // retrieve its value
        *s = q -> link;                 // move top to the next node
        free(q);                        // free memory of removed node
        return item;                    // give the caller the popped value
    }
}
