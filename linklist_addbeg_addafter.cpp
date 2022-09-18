#include<iostream>
using namespace std;

typedef struct node
{
   int data;
   struct node *link; 

}liste;

void append (liste **q,int d)
{
    liste *temp, *f;
    temp=*q;
    if(temp==NULL)
    {
        f=new liste();
        f->data=d;
        f->link=NULL;
        *q=f;
    }
    else
    {
        while(temp->link!=NULL)
        {
            temp=temp->link;
        }
        f=new liste();
        f->data=d;
        f->link=NULL;
        temp->link=f;
    }
}
void display(liste *head)
{
     while(head!=NULL)
     {
         printf("%d",head->data);
         head=head->link;
     }
}


int main()
{
    int x, choice, dat;
    liste *head=NULL;
    cout<<"enter the refrence number"<<endl;
    cin>>x;
    fflush(stdin);
    while(1)
    {
        cout<<"enter the choice: ";
        cin>>choice;
        cout<<endl;
        if(choice==0)
        {
            break;
        }
        else
        {
            cout<<"enter the data you want to be inserted: ";
            cin>>dat;
            cout<<endl;
            if(dat>x)
            {
                append(&head,dat);
            }
            else if(dat<x)
            {
                addbeg(&head,dat);
            }
        }
    }
    display(head);
    return 0;
}