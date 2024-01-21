#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};
void display(struct node *head)
{
    struct node *ptr;
    ptr = head;
    int count = 0;
    if (head == NULL)
    {
        printf("List is empty\n");
        printf("Number of elements are:%d\n", count);
    }
    while (ptr != NULL)
    {
        printf("Element is:%d\n", ptr->data);
        ptr = ptr->link;
        count++;
    }
    printf("Number of elements are:%d\n\n\n", count);
}
int main()
{
    struct node *head;
    head = (struct node *)malloc(sizeof(struct node));
    head->data = 5;
    head->link = NULL;
    struct node *current;
    current = (struct node *)malloc(sizeof(struct node));
    current->data = 6;
    current->link = NULL;
    head->link = current;
    current = (struct node *)malloc(sizeof(struct node));
    current->data = 7;
    current->link = NULL;
    head->link->link = current;
    // traversing the list i.e. printing the elements in the list
    display(head);

    // inserting node at the begenning of the list
    struct node *temp;
    temp = (node *)malloc(sizeof(node));
    temp->data = 4;
    temp->link = head;
    head = temp;
    display(head);

    // inserting node at the last of the list
    struct node *fptr;
    fptr = (struct node *)malloc(sizeof(struct node));
    fptr = head;
    current = (struct node *)malloc(sizeof(struct node));
    current->data = 8;
    current->link = NULL;
    while (fptr->link!= NULL)
    {
        fptr = fptr->link;
    }
    fptr->link =current;
    display(head);

    //inserting node at specific position
    int pos,value;
    printf("Enter the position you want to enter:");
    scanf("%d",&pos);
    printf("enter the data you want to enter:");
    scanf("%d",&value);
    temp=(struct node*) malloc(sizeof(node));
    temp->data=value;
    temp->link=NULL;
    
    fptr=(struct node*) malloc(sizeof(node));
    fptr=head;
    pos--;
    while(pos!=1)
    {
        fptr=fptr->link;
        pos--;
    }
    temp->link=fptr->link;
    fptr->link=temp;
    display(head);
    return 0;
}