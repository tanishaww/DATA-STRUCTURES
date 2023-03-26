#include<stdio.h>
#include<stdlib.h>

struct node
{
    int value;
    struct node *next;
};

void printLinkedlist(struct node *p)
{
    while (p != NULL)
    {
        printf("%d",p->value);
        p = p->next;
    }
}

int main()
{
    struct node *head;
    struct node *one = NULL;
    struct node *two = NULL;
    struct node *three = NULL;

    one = (struct node *)malloc(sizeof(struct node));
    two = (struct node *)malloc(sizeof(struct node));
    three = (struct node *)malloc(sizeof(struct node));

    one->value = 1;
    two->value = 2;
    three->value = 3;

    one->next = two;
    two->next = three;
    three->next = NULL;

    head = one;
    printLinkedlist(head);
}