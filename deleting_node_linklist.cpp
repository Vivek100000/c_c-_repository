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
    Node *head=new Node, *temp, *hector;int n, i=1, x, popn;
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
    cout<<"enter the position of the node you want to delete\n";
    cin>>popn;
    Node* ni=head, *l;
    if(popn>1)
    {
    for(int i=1;i<=n;i++)
    {
        if(i==popn)
        {
            l=ni->next;
            break;
        }
        ni=ni->next;
    }
    ni=head;
    for(int i=1;i<=n;i++)
    {
        if(i==popn-1)
        {
            ni->next=l;
            break;
        }
        ni=ni->next;
    }
    }
    else
    {
        head=head->next;
    }
    printlist(head);
    return 0;
}