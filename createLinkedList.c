#include <stdio.h>
#include <stdlib.h>


struct node
{
    int data;
    struct node* next;
};

void display(struct node* temp)
{
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}

void create()
{
    struct node* first,*last;
    first=(struct node*)malloc(sizeof(struct node));
    int x;
    scanf("%d",&x);
    first->data=x;
    last=first;
    last->next=NULL;
    scanf("%d",&x);
    while(x!=-1)
    {
        struct node* temp;
        temp=(struct node*)malloc(sizeof(struct node));
        temp->data=x;
        last->next=temp;
        last=temp;
        last->next=NULL;
        scanf("%d",&x);
    }
    display(first);
}
int main()
{
    create();
}
