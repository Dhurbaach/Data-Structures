#include<stdio.h>
#include<stdlib.h>
struct stac
{
    int size;
    int top;
    int *arr;
};
int isemty(struct stac *stc)
{
    if(stc->top==-1)
    {return 1;}
    else
    return 0;
}
int isfull(struct stac *st)
{
    if(st->top==st->size-1)
    {return 1;}
    else
    return 0;
}
void push(struct stac *st,int num)
{
   if( isfull(st)==1)
   {
    printf("Stack Overflow %d cannot be pushed",num);
   }
   else
   {
    st->top++;
    st->arr[st->top]=num;
   }

}
int pop(struct stac* st)
{
    int val;
   if( isemty(st)==1)
   {
    printf("Stack Underflow");
    return -1;
   }
   else
   {
    val=st->arr[st->top];
    st->top--;
   }
    return val;
}
int main()
{
    struct stac *stc=(struct stac*) malloc(sizeof(struct stac));
    stc->size=3;
    stc->top=-1;
    stc->arr=(int*) malloc(stc->size*sizeof(int));
    int val;
    int cho=1,cho1;
    while (cho==1)
    {
    
        printf("Enter the element in the stack:\n");
        scanf("%d",&val);
        push(stc,val);
        printf("want to enter more?1/0\n");
        scanf("%d",&cho);
        if (isfull(stc)==1)
        {printf("Stack Overflow cannot be pushed more\n");
        break;
        }
    }
    // printf("%d\n",isemty(stc));
    // printf("%d\n",isfull(stc));
    printf("Push operation completed\n");
    printf("The element in the stack after pushing are:\n");
    for (int i = stc->top; i >= 0; i--)
    {
        printf("%d\n",stc->arr[i]);
    }
    printf("want to pop?1/0\n");
    scanf("%d",&cho1);
    while (cho1==1)
    {
        printf("%d has been popped form the stack\n",pop(stc));
         printf("want to pop more?1/0\n");
        scanf("%d",&cho1);
        if (isemty(stc)==1)
        {
        printf("Stack Underflow cannot pop moṇre\n");
        break;
        }
    }
     printf("The element in the stack after popping are:\n");
    for (int i = stc->top; i >= 0; i--)
    {
        printf("%d\n",stc->arr[i]);
    }
    return 0;
}