/*#include<stdio.h> 

void swap(int x,int y)
{ 
    int temp; 
    temp=x; 
    x=y; 
    y=temp; 
    printf("\n value after swapping:"); 
    printf("\n a=%d b=%d",x,y); 
} 
int  main() 
{ 
    int a,b; 
    printf("\nenter two values of a & b"); 
    scanf("%d %d",&a,&b); 
    swap(a,b); 
    return 0;
}

#include<stdio.h> 

void swap(int *x,int *y)
{ 
     int temp; 
     temp=*x; 
     *x=*y; 
     *y=temp; 
     printf("\n value after swapping:"); 
     printf("\n a=%d b=%d",*x,*y); 
} 
int  main() 
{ 
     int a,b; 
     printf("\nenter two values of a & b"); 
     scanf("%d %d",&a,&b); 
     swap(&a,&b); 
    return 0;
}*/

/*#include<stdio.h>
#include<conio.h>
int list[5],tos=-1,size=4,ch;
  void push();
    void display();
    void pop();
    void peep();
    void create();
void main()
{
  
    printf("\nCreate the stack!!");
    create();
    printf("\n1:Push Operation");
    printf("\n2:Display");
    printf("\n3:Pop Operation");
    printf("\n4:Peep Operation");
    printf("\n0:Exit");
    do
    {
      printf("\nEnter The Above Choice:->");
      scanf("%d",&ch);
      switch(ch)
      {
   // case 0:
     //      exit(0);
       case 1:
           push();
           break;
       case 2:
           display();
           break;
       case 3:
           pop();
           break;
       case 4:
           peep();
           break;

     }
     }
     while(ch!=0);
}
void push()
{
   int value;
   if(tos>=size)
   {
     printf("\nThe Stack is Overflow");
     return;
   }
   else
   {
      printf("\nEnter The Value:->");
      scanf("%d",&value);
      tos=tos+1;
      list[tos]=value;
   }
}
void display()
{
   int i;
   if(tos==-1)
   {
     printf("\nThere is no Element Avaible");
   }
   else
   {
      for(i=0;i<=tos;i++)
      printf("\nThe %d Element is:->%d",i,list[i]);
   }
}
void pop()
{
  if(tos==0)
  {
    printf("\nThe stack is Underflow");
  }
  else
  {
    tos=tos-1;
   printf("\nElement Delete Successfull");
 }
}
void peep()
{
   int s;
   printf("\nEnter Position for search:->");
   scanf("%d",&s);
   if(tos-s<=-1)
   {
      printf("\nInvalid !");
   }
   else
   {
     printf("\nThe Element is:->%d",list[tos-s]);
   }
}
void create()
{
  int i;
  for(i=0;i<4;i++)
  {
    scanf("%d",& list[i]);
    tos=tos+1;
  }
}*/

/*#include <stdio.h>

int front = -1;
int rear = -1;
int queue[5];
int size = 5;

void insert(int element)
{
    if (rear == size - 1)
    {
        printf("Queue is full.\n");
    }
    else if (rear == -1)
    {
        rear++;
        front++;
        queue[rear] = element;
    }
    else
    {
        rear++;
        queue[rear] = element;
    }
}

void delete ()
{
    if (front == size || front > rear)
    {
        printf("Queue is empty.\n");
    }
    else
    {
        printf("Deleted element:%d\n", queue[front]);
        front++;
    }
}

void display()
{
    for (int i = front; i <= rear; i++)
    {
        printf("%d ", queue[i]);
    }
    printf("\t");
}
void create()
{
    int n;
    printf("\n enter the elements you want to enter:");
    scanf("%d",&n);
    printf("\n Enter the elements->");
    for(int i=0;i<n;i++)
    {
        if(rear==-1)
        {
            rear++;
            front++;
            scanf("%d",&queue[i]);
        }
        else
        {
            scanf("%d",& queue[i]);
            rear++;
        }
    }
}

void main()
{
    int choice;
    create();
    do
    {
        printf("\n1-Insert\n2-Delete\n3-Display\n4-Exit\nEnter your choice:");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\nEnter element:");
            int insertElement;
            scanf("%d", &insertElement);
            insert(insertElement);
            break;
        case 2:
            delete ();
            break;
        case 3:
            display();
            break;
        default:
            printf("Invalid input.");
        }
    } while (choice != 4);
}


#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *i,n;
    printf("\nEnter the number of elements:");
    scanf("%d",&n);
    i=(int*)malloc(n*sizeof(int));
    if(i==NULL)
    {
        printf("memory is not allocated\n");
    }
    else
    {
        printf("\nmemory is allocated by  malloc");
    }
    free(i);
    i=(int *)calloc(n,sizeof(int));
     if(i==NULL)
    {
        printf("\nmemory id=s not allocated");
    }
    else
    {
        printf("\nmemory is allocated by  calloc");
    }
    free(i);
    return 0;
}

#include <stdio.h>

int front = -1;
int rear = -1;
int queue[5];
int size = 5;

void insert(int element)
{
    if (rear == size - 1)
    {
        printf("Queue is full.\n");
    }
    else if (rear == -1)
    {
        rear++;
        front++;
        queue[rear] = element;
    }
    else
    {
        rear++;
        queue[rear] = element;
    }
}

void delete ()
{
    if (front == size || front > rear)
    {
        printf("Queue is empty.\n");
    }
    else
    {
        printf("Deleted element:%d\n", queue[front]);
        front++;
    }
}

void display()
{
    for (int i = front; i <= rear; i++)
    {
        printf("%d ", queue[i]);
    }
    printf("\t");
}
void create()
{
    int n;
    printf("\n enter the elements you want to enter:");
    scanf("%d",&n);
    printf("\n Enter the elements->");
    for(int i=0;i<n;i++)
    {
        if(rear==-1)
        {
            rear++;
            front++;
            scanf("%d",&queue[i]);
        }
        else
        {
            scanf("%d",& queue[i]);
            rear++;
        }
    }
}

void main()
{
    int choice;
    create();
    do
    {
        printf("\n1-Insert\n2-Delete\n3-Display\n4-Exit\nEnter your choice:");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\nEnter element:");
            int insertElement;
            scanf("%d", &insertElement);
            insert(insertElement);
            break;
        case 2:
            delete ();
            break;
        case 3:
            display();
            break;
        default:
            printf("Invalid input.");
        }
    } while (choice != 4);
}


#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head=NULL;
struct node *temp;
struct node *newnode;

void create() {
    printf("Enter value:");
    int value;
    scanf("%d", &value);
    if (head==NULL) {
        newnode=(struct node *)malloc(sizeof(struct node));
        head=newnode;
        newnode->data=value;
        newnode->next=NULL;    
    } else {
        newnode->next=(struct node *)malloc(sizeof(struct node));
        newnode=newnode->next;
        newnode->data=value;
        newnode->next=NULL;
    }
}

void display() {
    temp=head;
    if (head==NULL) {
        printf("List empty!\n");
    } else {
        while (temp!=NULL) {
            printf("%d ", temp->data);
            temp=temp->next;
        }
        printf("\n");
    }
}

void countNodes() {
    int count=0;
    temp=head;
    while (temp!=NULL) {
        count++;
        temp=temp->next;
    }
    printf("%d\n", count);
}

void delete() {
    printf("Enter position:");
    int pos;
    scanf("%d", &pos);
    if (head->next==NULL) {
        head=NULL;
    } else if (pos==1) {
        head=head->next;
    } else {
        temp=head;
        for (int i=0; i<pos-2; i++) {
            temp=temp->next;
        }
        temp->next=temp->next->next;
    }
}

void insert() {
    struct node *insNode=(struct node *)malloc(sizeof(struct node));
    printf("Enter position:");
    int pos;
    scanf("%d", &pos);
    printf("Enter value:");
    int value;
    scanf("%d", &value);
    if (pos==1) {
        insNode->data=value;
        insNode->next=head;
        head=insNode;
    } else {
        temp=head;
        for (int i=0; i<pos-2; i++) {
            temp=temp->next;
        }
        insNode->data=value;
        insNode->next=temp->next;
        temp->next=insNode;
    }
}

void main() {
    int choice;
    do {
        printf("1-Add Nodes\n2-Insert Node\n3-Display count\n4-Display List\n5-Delete Node\n6-Exit\nEnter your choice:");
        scanf("%d", &choice);
        switch (choice) {
            case 1: create();
                break;
            case 2: insert();
                break;
            case 3: countNodes();
                break;
            case 4: display();
                break;
            case 5: delete();
                break;
            case 6: printf("Thank You!\n");
                break;
            default: printf("Invalid choice.\n");
                break;
        }
    } while (choice!=6);
}

#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

struct node {
    int data;
    struct node *next;
    struct node *prev;
};

struct node *head=NULL;
struct node *temp=NULL;
struct node *newnode;

void create() {
    printf("Enter value:");
    int value;
    scanf("%d", &value);
    if (head==NULL) {
        newnode=(struct node *)malloc(sizeof(struct node));
        newnode->data=value;
        newnode->next=NULL;
        newnode->prev=NULL;
        head=newnode;
    } else {
        newnode->next=(struct node *)malloc(sizeof(struct node));
        newnode->next->prev=newnode;
        newnode=newnode->next;
        newnode->data=value;
        newnode->next=NULL;
    }
}

void insert() {
    struct node *insNode=(struct node *)malloc(sizeof(struct node));
    printf("Enter position:");
    int pos;
    scanf("%d", &pos);
    printf("Enter value:");
    int value;
    scanf("%d", &value);
    if (pos==1) {
        insNode->data=value;
        insNode->next=head;
        insNode->prev=NULL;
        head->prev=insNode;
        head=insNode;
    } else {
        temp=head;
        for (int i=0; i<pos-2; i++) {
            temp=temp->next;
        }
        insNode->data=value;
        insNode->next=temp->next;
        insNode->prev=temp;
        temp->next=insNode;
    }
}

void delete() {
    printf("Enter position:");
    int pos;
    scanf("%d", &pos);
    if (head->next==NULL) {
        head=NULL;
    } else if (pos==1) {
        head->next->prev=NULL;
        head=head->next;
    } else {
        temp=head;
        for (int i=0; i<pos-2; i++) {
            temp=temp->next;
        }
        if (temp->next->next==NULL) {
            temp->next=NULL;
        } else {
            temp->next->next->prev=temp;
            temp->next=temp->next->next;
        }
    }
}

void display() {
    temp=head;
    if (head==NULL) {
        printf("List empty!\n");
    } else {   
        while (temp!=NULL) {
            printf("%d ",temp->data);
            temp=temp->next;
        }
        printf("\n");
    }
}

void main() {
    int choice;
    do {
        printf("1-Add Nodes\n2-Insert Node\n3-Delete Node\n4-Display List\n5-Exit\nEnter your choice:");
        scanf("%d", &choice);
        switch (choice) {
            case 1: create();
                break;
            case 2: insert();
                break;
            case 3: delete();
                break;
            case 4: display();
                break;
            case 5: printf("Thank You!\n");
                break;
            default: printf("Invalid choice.\n");
                break;
        }
    } while (choice!=5);
}

#include<stdio.h>
#include<ctype.h>

char stack[100];
int top = -1;

void push(char x) {
    stack[++top] = x;
}

char pop() {
    if(top == -1)
        return -1;
    else
        return stack[top--];
}

int priority(char x) {
    if(x == '(')
        return 0;
    if(x == '+' || x == '-')
        return 1;
    if(x == '*' || x == '/')
        return 2;
    return 0;
}

int main() {
    char exp[100];
    char *e, x;
    printf("Enter the expression : ");
    scanf("%s",exp);
    e = exp;
    
    while(*e != '\0') {
        if(isalnum(*e))
            printf("%c ",*e);
        else if(*e == '(')
            push(*e);
        else if(*e == ')') {
            while((x = pop()) != '(')
                printf("%c ", x);
        }
        else {
            while(priority(stack[top]) >= priority(*e))
                printf("%c ",pop());
            push(*e);
        }
        e++;
    }
    
    while(top != -1) {
        printf("%c ",pop());
    }
    return 0;
}
*/



/*#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

struct node {
    int data;
    struct node *next;
    struct node *prev;
};

struct node *head=NULL;
struct node *temp=NULL;
struct node *newnode;

void create() {
    printf("Enter value:");
    int value;
    scanf("%d", &value);
    if (head==NULL) {
        newnode=(struct node *)malloc(sizeof(struct node));
        newnode->data=value;
        newnode->next=NULL;
        newnode->prev=NULL;
        head=newnode;
    } else {
        newnode->next=(struct node *)malloc(sizeof(struct node));
        newnode->next->prev=newnode;
        newnode=newnode->next;
        newnode->data=value;
        newnode->next=NULL;
    }
}

void insert() {
    struct node *insNode=(struct node *)malloc(sizeof(struct node));
    printf("Enter position:");
    int pos;
    scanf("%d", &pos);
    printf("Enter value:");
    int value;
    scanf("%d", &value);
    if (pos==1) {
        insNode->data=value;
        insNode->next=head;
        insNode->prev=NULL;
        head->prev=insNode;
        head=insNode;
    } else {
        temp=head;
        for (int i=0; i<pos-2; i++) {
            temp=temp->next;
        }
        insNode->data=value;
        insNode->next=temp->next;
        insNode->prev=temp;
        temp->next=insNode;
    }
}

void delete() {
    printf("Enter position:");
    int pos;
    scanf("%d", &pos);
    if (head->next==NULL) {
        head=NULL;
    } else if (pos==1) {
        head->next->prev=NULL;
        head=head->next;
    } else {
        temp=head;
        for (int i=0; i<pos-2; i++) {
            temp=temp->next;
        }
        if (temp->next->next==NULL) {
            temp->next=NULL;
        } else {
            temp->next->next->prev=temp;
            temp->next=temp->next->next;
        }
    }
}

void display() {
    temp=head;
    if (head==NULL) {
        printf("List empty!\n");
    } else {   
        while (temp!=NULL) {
            printf("%d ",temp->data);
            temp=temp->next;
        }
        printf("\n");
    }
}

void main() {
    int choice;
    do {
        printf("1-Add Nodes\n2-Insert Node\n3-Delete Node\n4-Display List\n5-Exit\nEnter your choice:");
        scanf("%d", &choice);
        switch (choice) {
            case 1: create();
                break;
            case 2: insert();
                break;
            case 3: delete();
                break;
            case 4: display();
                break;
            case 5: printf("Thank You!\n");
                break;
            default: printf("Invalid choice.\n");
                break;
        }
    } while (choice!=5);
}
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

struct node {
    int data;
    struct node *next;
};

struct node *top=NULL;
struct node *newnode=NULL;

void push(int element) {
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

void pop() {
    if (top==NULL) {
        printf("Stack underflow.\n");
    } else {
        printf("Deleted element=%d\n", top->data);
        top=top->next;
    }
}

void display() {
    newnode=top;
    while(newnode!=NULL) {
        printf("%d ", newnode->data);
        newnode=newnode->next;
    }
    printf("\n");
}

void main() {
    int choice;
    do {
        printf("1-Push\n2-Pop\n3-Display\n4-Exit\nEnter your choice:");
        scanf("%d", &choice);
        switch (choice) {
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
}

#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

struct node {
    int data;
    struct node *next;
};

struct node *front=NULL;
struct node *rear=NULL;
struct node *newnode=NULL;

void enqueue(int element) {
    if (rear==NULL) {
        newnode=(struct node *)malloc(sizeof(struct node));
        newnode->data=element;
        newnode->next=NULL;
        rear=front=newnode;
    } else {
        newnode->next=(struct node *)malloc(sizeof(struct node));
        rear=newnode->next;
        newnode=newnode->next;
        newnode->data=element;
        newnode->next=NULL;
    }
}

void dequeue() {
    if (front==NULL) {
        printf("Queue is empty.\n"); 
    } else {
        printf("Deleted item=%d\n", front->data);
        front=front->next;
    }
}

void display() {
    newnode=front;
    if (front==NULL) {
        printf("Queue is empty.\n"); 
    } else {
        while(newnode!=NULL) {
            printf("%d ", newnode->data);
            newnode=newnode->next;
        }
        printf("\n");
    }
}

void main() {
    int choice;
    do {
        printf("1-Insert\n2-Delete\n3-Display\n4-Exit\nEnter your choice:");
        scanf("%d", &choice);
        switch (choice) {
            case 1: printf("Enter element:");
                    int insertElement;
                    scanf("%d", &insertElement);
                    enqueue(insertElement);
                break;
            case 2: dequeue();
                break;
            case 3: display();
                break;
            case 4: printf("Thank You!");
                break;
            default: printf("Invalid choice.\n");
        }
    } while(choice!=4);
}
*/

#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

struct node {
    int data;
    struct node *next;
};

struct node *tail=NULL;
struct node *newnode=NULL;

void create() {
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("Enter value:");
    int value;
    scanf("%d", &value);
    if (tail==NULL) {
        newnode->data=value;
        tail=newnode;
        newnode->next=tail;
    } else {
        newnode->data=value;
        newnode->next=tail->next;
        tail->next=newnode;
        tail=newnode;
    }
}

void delete() {
    printf("Enter position:");
    int pos;
    scanf("%d", &pos);
    if (tail->next==tail) {
        tail=NULL;
    } else {
        if (pos==1) {
            tail->next=tail->next->next;
        } else {
            newnode=tail;
            for (int i=0; i<pos-1; i++) {
                newnode=newnode->next;
            }
            if (newnode->next==tail) {
                tail=newnode;
            }
            newnode->next=newnode->next->next;
        }
    }
}

void insert() {
    printf("Enter position:");
    int pos;
    scanf("%d", &pos);
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("Enter value:");
    int value; 
    scanf("%d", &value);    
    if (pos==1) {
        newnode->data=value;
        newnode->next=tail->next;
        tail->next=newnode;
    } else {
        newnode->data=value;
        for (int i=0; i<pos-1; i++) {
            newnode=newnode->next;
        }
        newnode->next=newnode->next;
        newnode->next=newnode;
        if (newnode==tail) {
            tail=newnode;
        }
    }
}

void display() {
    newnode=tail;
    if (tail==NULL) {
        printf("List empty.\n");
    } else {
        do {
            newnode=newnode->next;
            printf("%d ", newnode->data);
        } while(newnode!=tail);
        printf("\n");
    }
}

void main() {
    int choice;
    do {
        printf("1-Add Nodes\n2-Insert Node\n3-Delete Node\n4-Display List\n5-Exit\nEnter your choice:");
        scanf("%d", &choice);
        switch (choice) {
            case 1: create();
                break;
            case 2: insert();
                break;
            case 3: delete();
                break;
            case 4: display();
                break;
            case 5: printf("Thank You!\n");
                break;
            default: printf("Invalid choice.\n");
                break;
        }
    } while (choice!=5);
}

#include<stdio.h>
#include<stdlib.h>

struct node {
    struct node *left;
    int data;
    struct node *right;
};

struct node *root=NULL;
struct node *newnode;
struct node *current;
struct node *parent;

void insert() {
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("Enter node data:");
    scanf("%d", &newnode->data);
    newnode->left=NULL;
    newnode->right=NULL;
    if (root==NULL) {
        root=newnode;
    } else {
        current=root; 
        parent=NULL;
        while (current!=NULL) {
            parent=current;
            if (newnode->data>current->data) {
                current=current->right;
            } else {
                current=current->left;
            }
        }
        if (newnode->data>parent->data) {
            parent->right=newnode;
        } else {
            parent->left=newnode;
        }
    }
}

void preorder(struct node *root) {
    if (root!=NULL) {
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(struct node *root) {
    if (root!=NULL) {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->data);
    }
}

void inorder(struct node *root) {
    if (root!=NULL) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

void search() {
    printf("Enter the element you want to search:");
    int element;
    scanf("%d", &element);
    struct node *ptr=root;
    int flag=0;
    while (ptr!=NULL) {
        if (ptr->data==element) {
            flag=1;
            break;
        } else if (ptr->data>element) {
            ptr=ptr->left;
        } else {
            ptr=ptr->right;
        }
    }
    if (flag == 1) { 
        printf("The element %d is present\n", element);
    } else {
        printf("The element is not present\n");
    }
}

void main() {
    int choice;
    do {
        printf("1-Insert\n2-PreOrder\n3-PostOrder\n4-InOrder\n5-Search\n6-Exit\nEnter your choice:");
        scanf("%d", &choice);
        switch (choice) {
            case 1: insert();
                break;
            case 2: printf("Preorder:");
                    preorder(root);
                    printf("\n");
                break;
            case 3: printf("Postorder:");
                    postorder(root);
                    printf("\n");
                break;
            case 4: printf("Inorder:");
                    inorder(root);
                    printf("\n");  
                break;
            case 5: search();
                break;
            case 6: printf("Thank You!\n");
                break;
            default: printf("Invalid Input!");
                break;
        }
    } while (choice != 6);
}







#include<stdio.h>
#include<stdlib.h>

struct node {
    struct node *left;
    int data;
    struct node *right;
};

struct node *root=NULL;
struct node *newnode;
struct node *current;
struct node *parent;

void insert() {
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("Enter node data:");
    scanf("%d", &newnode->data);
    newnode->left=NULL;
    newnode->right=NULL;
    if (root==NULL) {
        root=newnode;
    } else {
        current=root; 
        parent=NULL;
        while (current!=NULL) {
            parent=current;
            if (newnode->data>current->data) {
                current=current->right;
            } else {
                current=current->left;
            }
        }
        if (newnode->data>parent->data) {
            parent->right=newnode;
        } else {
            parent->left=newnode;
        }
    }
}

void preorder(struct node *root) {
    if (root!=NULL) {
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(struct node *root) {
    if (root!=NULL) {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->data);
    }
}

void inorder(struct node *root) {
    if (root!=NULL) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

void main() {
    int choice;
    do {
        printf("1-Insert\n2-PreOrder\n3-PostOrder\n4-InOrder\n5-Exit\nEnter your choice:");
        scanf("%d", &choice);
        switch (choice) {
            case 1: insert();
                break;
            case 2: printf("Preorder:");
                    preorder(root);
                    printf("\n");
                break;
            case 3: printf("Postorder:");
                    postorder(root);
                    printf("\n");
                break;
            case 4: printf("Inorder:");
                    inorder(root);
                    printf("\n");  
                break;
            case 5: printf("Thank You!\n");
                break;
            default: printf("Invalid Input!");
                break;
        }
    } while (choice!=5);
}






#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int partition(int arr[], int lowerBound, int upperBound) {
    int pivot=arr[lowerBound];
    int start=lowerBound;
    int end=upperBound;
    while (start<end) {
        while (arr[start]<=pivot) {
            start++;
        }
        while (arr[end]>pivot) {
            end--;
        }
        if (start<end) {
            int temp=arr[start];
            arr[start]=arr[end];
            arr[end]=temp;
        }
    }
    if (start>end) {
        int temp=arr[lowerBound];
        arr[lowerBound]=arr[end];
        arr[end]=temp;
    }
    return end;
}

void sort(int arr[], int lowerBound, int upperBound) {
    if (lowerBound<upperBound) {
        int partitionPosition=partition(arr, lowerBound, upperBound);
        sort(arr, lowerBound, partitionPosition-1);
        sort(arr, partitionPosition+1, upperBound);
    }
}

void main() {
    int arr[10]; 
    printf("Enter elements:");
    for (int i=0; i<10; i++) {
        scanf("%d", &arr[i]);
    }
    sort(arr, 0, 9);
    printf("After sorting...\n");
    for (int i=0; i<10; i++) {
        printf("%d ", arr[i]);
    }
}



#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

void merge(int arr[], int lowerBound, int mid, int upperBound) {
    int i=lowerBound;
    int j=mid+1;
    int sorted[upperBound+1];
    int k=lowerBound;
    while (i<=mid && j<=upperBound) {
        if (arr[i]<=arr[j]) {
            sorted[k++]=arr[i++];
        } else {
            sorted[k++]=arr[j++];
        }
    }
    while (i<=mid) {
        sorted[k++]=arr[i++];
    } 
    while (j<=upperBound) {
        sorted[k++]=arr[j++];
    }
    for (int i=lowerBound; i<=upperBound; i++) {
        arr[i]=sorted[i];
    }
}

void mergeSort(int arr[], int lowerBound, int upperBound) {
    if (lowerBound<upperBound) {
        int mid=(lowerBound+upperBound)/2;
        mergeSort(arr, lowerBound, mid);
        mergeSort(arr, mid+1, upperBound);
        merge(arr, lowerBound, mid, upperBound);
    }
}

void main() {
    int arr[]={-12, 123, 3, 23, 3, 34, 23, -4, 34, 10};
    int n=sizeof(arr)/sizeof(arr[0]);
    int lb=0;
    int ub=n-1;
    mergeSort(arr, lb, ub);
    printf("After sorting...\n");
    for (int i=lb; i<=ub; i++) {
        printf("%d ", arr[i]);
    }
}





#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

void sort (int arr[], int n) {
    for (int i=0; i<n; i++) {
        for (int j=0; j<n-i-1; j++) {
            if (arr[j]>arr[j+1]) {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

void main() {
    int arr[10];
    printf("Enter elements:");
    for (int i=0; i<10; i++) {
        scanf("%d", &arr[i]);
    }
    sort(arr, 10);
    printf("After sorting...\n");
    for (int i=0; i<10; i++) {
        printf("%d ", arr[i]);
    }
}





#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

void search(int arr[], int n, int target) {
    int begin=0;
    int end=n-1;
    while (begin<=end) {
        int mid=(begin+end)/2;
        if (arr[mid]==target) {
            printf("Element found at %d\n", mid);
            break;
        } else if (arr[mid]<target) {
            begin=mid+1;
        } else {
            end=mid-1;
        }
    }
    if (begin>end) {
        printf("Element not found\n");
    }
}

void main() {
    int arr[10];
    printf("Enter elements:");
    for (int i=0; i<10; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter target value:");
    int target;
    scanf("%d", &target);
    search(arr, 10, target);
}
