#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *prev;
    struct Node *next;
};
int main()
{
    int x,n;
    struct Node *head=NULL,*newnode,*temp,*temp1;
    temp1=head;
    newnode=(struct Node*)malloc(sizeof(struct Node));
    printf("Enter no of elements");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
    printf("Enter value:");
    scanf("%d",&x);
    newnode->data=x;
    newnode->prev=NULL;
    newnode->next=NULL;
    if(head==NULL)
    {
    head=temp=newnode;
    newnode->prev=head;
    }
    else
    {
        temp->next=newnode;
        newnode->prev=temp;
        temp=newnode;
    }
    }
    printf("\nFrom starting:");
    for(int i=temp1;temp1!=NULL;i++)
    {
    printf("%d",temp1->data);
    temp1=temp1->next;
    }
    printf("\nFrom end:");
    for(int i=NULL;temp!=head;i--)
    {
    printf("%d",temp->data);
    temp=temp->prev;
    }
return 0;
}