#include<stdio.h>
#include<stdlib.h>

void insert(int);
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head;
void main()
{
    int c;
    int item;
    do
    {
        printf("\nEnter the item you want to insert: ");
        scanf("%d",&item);
        insert(item);
        printf("\nPress 0 to insert more: ");
        scanf("%d",&c);
    } while (c == 0);
}
void insert(int item)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    if(ptr == NULL)
    {
        printf("\nOverflow");
    }
    else
    {
        if(head == NULL)
        {
            ptr->next = NULL;
            ptr->prev=NULL;
            ptr->data=item;
            head=ptr;
        }
        else
        {
            ptr->data=item;
            ptr->prev=NULL;
            ptr->next = head;
            head->prev=ptr;
            head=ptr;
        }
    }
}