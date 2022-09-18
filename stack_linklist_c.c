#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct node
{
    int data; 
    struct node *link;

}stack;
void push(stack **q)
{
    int a;
    stack *temp;
    temp=(stack*)malloc(sizeof(stack));
    printf("enter the element\n");
    scanf("%d",&a);
    temp->data=a;
    temp->link=(*q);
    *q=temp;
}
int pop(stack **q)
{
    printf("element popped:%d\n",(*q)->data);
    (*q)=(*q)->link;
    if((*q)==NULL)
    {
        return 8;
    }
    else 
    {
        return 7;
    }
}
void display(stack *g)
{
    printf("the resulting stack is:-\n");
    while(g!=NULL)
    {
       printf("%d\n",g->data);
       g=g->link;
    }
}

int main()
{
   int choice ,test=0;
   stack *head=NULL;
   printf("push-1\npop-2\ndisplay & end-3\n");
   while(1)
   {
     if(test==8)
     {
         printf("stack is empty\n");
         break;
     }
     printf("enter the choice: ");
     scanf("%d",&choice);
     if(choice==1)
     {
         push(&head);
     }
     else if(choice==2)
     {
         test=pop(&head);
     }
     else if(choice==3)
     {
         display(head);
         break;
     }
     
   }
   return 0;
}