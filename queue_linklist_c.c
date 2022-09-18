#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
  int data;
  struct node *link;
}queue;
queue* push(queue **r,queue **f)
{
  queue *hector, *comp;
  int a;

  if(*r==NULL&&*f==NULL)
  {
    *r=*f=(queue*)malloc(sizeof(queue));
  }
  hector=(queue*)malloc(sizeof(queue));
  printf("enter the element: ");
  scanf("%d",&a);
  comp=*r;
  (*r)->data=a;
   (*r)->link=hector;
  *r=hector;
  return comp;
}
void pop(queue **f,queue *termi,queue **r)
{
  if((*f)==termi)
  {
    printf("element popped: %d\n",(*f)->data);
    (*f)=NULL;
    (*r)=NULL;
    printf("queue is empty");
    exit(0);
  }
  printf("element popped: %d\n",(*f)->data);
  (*f)=(*f)->link;

}
void display(queue *f)
{
  while(f!=NULL)
  {
    printf("%d ",f->data);
    f=f->link;
  }
}

int main()
{
  queue *rear=NULL, *front=NULL, *terminator;

  int choice;
  printf("push-1\npop-2\ndisplay & end-3\n");
  while(1)
  {
    printf("enter your choice: ");
    scanf("%d",&choice);
    if(choice==1)
    {

      terminator=push(&rear,&front);
    }
    else if(choice==2)
    {
       pop(&front,terminator,&rear);
    }
    else if(choice==3)
    {
        terminator->link=NULL;
        display(front);
        break;
    }
  }
}
