#include <stdio.h>
#include <stdlib.h>
//Deleting the node from specific position
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
    current=(struct node*) malloc(sizeof(struct node));
    current->data=8;
    current->link=NULL;
    head->link->link->link=current;
    // traversing the list i.e. printing the elements in the list
    display(head);
    struct node *ptr;
    ptr=(struct node*)malloc(sizeof(struct node));
    current=(struct node*)malloc(sizeof(struct node));
    ptr=head;
    current =head;
    int pos=3;
    while(pos!=1)
    {
        ptr=current;
        current=current->link;
        pos--;
    }
    ptr->link=current->link;
    free(current);
    current=NULL;
    printf("After removing the element :\n");
    display(head);
    return 0;
}