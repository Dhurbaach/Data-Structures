#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};
void dis(struct node *head)
{
    struct node *ptr;
    ptr = head;
    int count = 0;
    if (head == NULL)
    {
        printf("Link is empty\n");
        printf("Number of elements are:%d", count);
    }
    else
    {
        while (ptr != NULL)
        {
            printf("Element in list is %d\n", ptr->data);
            ptr = ptr->link;
            count++;
        }
        printf("Number of elements are:%d\n\n", count);
    }
}
int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    head->data = 2;
    head->link = NULL;
    ;
    temp->data = 3;
    temp->link = NULL;
    head->link = temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = 4;
    temp->link = NULL;
    head->link->link = temp;
    dis(head);

    // inserting list at the begennning
    struct node *tempo;
    tempo = (struct node *)malloc(sizeof(struct node));
    tempo->data = 5;
    tempo->link = head;
    head = tempo;
    dis(head);

    // deletion of list from begenning
    tempo = (struct node *)malloc(sizeof(struct node));
    tempo = head;
    head = head->link;
    free(tempo);
    tempo = NULL;
    dis(head);

    return 0;
}