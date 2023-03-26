#include<stdio.h>

int top = -1;
int size = 5;
int stack[5];

void push(int element)
{
    if (top == size - 1)
    {
        printf("Overflow\n");
    }
    else
    {
        top++;
        stack [top] = element;
    }
}

void pop()
{
    if (top == -1)
    {
        printf("Underflow");
    }
    else
    {
        printf("Deleted element = %d\n", stack[top]);
        top--;
    }
}

void peep(int i)
{
    if (top-i<0)
    {
        printf("Element cannot be reached.\n");
    }
    else
    {
        printf("Element found = %d\n",stack[top-i]);
    }
}

void change(int i)
{
    if (top-i<0)
    {
        printf("Element cannot be reached.\n");
    }
    else
    {
        int element;
        printf("Enter new element: ");
        scanf("%d",&element);
        stack[top-i] = element;
    }
}

void display()
{
    for(int i = top; i>=0; i--)
    {
        printf("%d",stack[i]);
    }
    printf("\n");
}

void main()
{
    int choice;
    do
    {
        printf("Enter 1 for push");
        printf("Enter 2 for pop");
        printf("Enter 3 for peep");
        printf("Enter 4 for change");
        printf("Enter 5 for display");
        printf("Enter 6 for Exit");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            printf("Enter element: ");
            int x;
            scanf("%d",&x);
            push(x);
            break;
            case 2:
            pop();
            case 3:
            
        }

    }
    while();
}

/*#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

struct node 
{
    int data;
    struct node *next;
};

struct node *top=NULL;
struct node *newnode=NULL;
struct node *temp=NULL;

void push(int element) 
{
    newnode=(struct node *)malloc(sizeof(struct node));
    if (top==NULL) {
        top=newnode;
        newnode->data=element;
        newnode->next=NULL;
    } else {
        newnode->data=element;
        newnode->next=top;
        top=newnode;
    }
}

void pop() 
{
    if (top==NULL) {
        printf("Stack underflow.\n");
    } else {
        printf("Deleted element=%d\n", top->data);
        top=top->next;
    }
}

void display() 
{
    temp=top;
    while(temp!=NULL) {
        printf("%d ", temp->data);
        temp=temp->next;
    }
    printf("\n");
}

void main() 
{
    int choice;
    do 
    {
        printf("1-Push\n2-Pop\n3-Display\n4-Exit\nEnter your choice:");
        scanf("%d", &choice);
        switch (choice) 
        {
            case 1: printf("Enter element:");
                    int pushElement;
                    scanf("%d", &pushElement);
                    push(pushElement);
                break;
            case 2: pop();
                break;
            case 3: display();
                break;
            case 4: printf("Thank You!\n");
                break;
            default: printf("Invalid choice.\n");
        }
    } while(choice!=4);
}*/