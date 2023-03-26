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
    int data;
    scanf("%d", &data);
    newnode->data=data;
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