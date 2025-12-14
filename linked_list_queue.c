/* Implementation of a queue using linked list */

#include <stdio.h>
#include <stdlib.h>

struct queue
{
    int item;
    struct queue *link;
};

struct queue *front, *rear;

void add(int);
int del_queue();

int main()
{
    int item;
    
    front = rear = NULL;

    add(10);
    add(20);
    add(30);
    add(40);
    add(50);
    add(60);

    item = del_queue();
    printf("Deleted item: %d\n", item);
    item = del_queue();
    printf("Deleted item: %d\n", item);

    return 0;
}

void add(int item)
{
    struct queue *q;
    q = (struct queue *) malloc(sizeof (struct queue));
    q -> item = item;
    q -> link = NULL;
    
    if(rear == NULL)
    {
        rear = q;
        front = q;
    }
    else
    {
        q -> link = rear;
        rear = q;
    }
}

int del_queue()
{
    struct queue *q;
    int item;

    q = rear;

    if(front == NULL)
    {
        printf("Queue is empty\n");
        return -1;
    }
    else if (front == rear)
    {
        item = q -> item;
        front = rear = NULL;
        free(q);
    }
    else
    {
        // reach the node before front
        while(q -> link -> link != NULL)
            q = q -> link;

        item = q -> link -> item;   // assign item from front
        free(q -> link);            // free front
        
        // set current node to front
        q -> link = NULL;
        front = q;
    }

    return item;
}
