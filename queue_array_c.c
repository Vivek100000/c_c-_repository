#include <stdio.h>
#include <stdlib.h>
typedef struct Queue
{
   int arr[50];
   int front;
   int rear;
   
}q;
void initiate(q *s)
{
   s->front=-1;
   s->rear=-1;
}
void push(q *head)
{
    int a;
    printf("enter the element: ");
    scanf("%d",&a);
    head->rear++;
    head->arr[head->rear]=a;
    if(head->front==-1)
    {
        head->front++;
    }
}
void pop(q *head)
{
    if(head->front==head->rear)
    {
        printf("element popped: %d\n",head->arr[head->rear]);
        printf("stack is empty");
        exit(0);
    }
    printf("element popped: %d\n",head->arr[head->front]);
    head->front++;
    
}
void display(q *head)
{
    int temp=head->front;
    while(temp!=head->rear)
    {
         printf("%d\n",head->arr[temp]);
         temp++;
    }
    printf("%d\n",head->arr[temp]);
}
int main()
{
  q head;
  int choice;
  printf("push-1\npop-2\ndisplay & end-3\n");
  initiate(&head);
  while(1)
  {
      printf("enter the choice: ");
      scanf("%d",&choice);
      if(choice==1)
      {
          push(&head);
      }
      else if(choice==2)
      {
          pop(&head);
      }
      else if(choice==3)
      {
          display(&head);
          break;
      }
  }
  return 0;   
}