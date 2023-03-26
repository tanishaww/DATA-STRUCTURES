#include<stdio.h>

int front = -1;
int rear = -1;
int queue[5];
int size = 5;

void insert(int element)
{
    if (rear == size-1)
    {
        printf("Queue is full.");
    }
    else if (rear == -1)
    {
        rear++ ; front++;
        queue[rear] = element;
    }
    else 
    {
        rear++;
        queue[rear] = element;
    }
}

void delete()
{
    if (front == size || front > rear)
    {
        printf("Queue is empty.\n");
    }
    else
    {
        printf("Deleted element: %d\n", queue[front]);
        front++;
    }
}

void display()
{
    for()
}
