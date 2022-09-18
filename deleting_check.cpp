#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;
};
void printlist(Node *n)
{
    while(n!=NULL)
    {
        cout<<n->data<<" ";
        n=n->next;
    }
}
int main()
{
    Node *head=new Node, *temp, *hector;int n, i=1, x, number;
    temp=head;
    cout<<"number of elements to enter in the list"<<endl;
    cin>>n;
    cout<<"enter the elements to enter"<<endl;
    while(i<=n)
    {
        hector=new Node;
        cin>>x;
        if(i==n)
        {
            temp->data=x;
            temp->next=NULL;
        }
        else
        {
            temp->data=x;
            temp->next=hector;
        }
        temp=hector;
        i++;
    }
    printlist(head);
    cout<<endl;
    cout<<"enter the number to be checked \n";
    cin>>number;
    Node* ni=head, *l;
    int track=0;
    int f=0;
    while(ni!=NULL)
    {
        if(ni->data==number)
        {
            l=ni->next;
            f=1;
            break;
        } ni=ni->next;track++;
    }
    if(f==0)
    {
        
         cout<<"number not found in linklist: ";    
    }
    else if(track==0)
    {
         head=l;
    }
    else 
    {

    
    ni=head;
    for(int i=1;i<=track;i++)
    {
        if(i==track)
        {
            ni->next=l;
            break;
        }
        ni=ni->next;
        
    }
    }
    printlist(head);
    return 0;
}