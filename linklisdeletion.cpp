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

    //deleting the first node of the list
    struct node*temp=head;
    head=head->link;
    free(temp);
    temp=NULL;
    display(head);

    //deleting the last node of the list
    current = (struct node *)malloc(sizeof(struct node));
    temp = (struct node *)malloc(sizeof(struct node));
    current=head;
    temp=head;
    while(current->link!=NULL)
    {
        temp=current;
        current=current->link;
    }
    temp->link=NULL;
    free(current);
    current=NULL;
    display(head);

    //deleting the node from specific position in the list
    int pos=3;
    return 0;
}