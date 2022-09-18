
#include <bits/stdc++.h>
using namespace std;

class Node {
public:
	int data;
	Node *next;
	
};


void printList(Node* n)
{
	while (n != NULL) {
		cout << n->data << " ";
		n = n->next;
	}
}


int main()
{
    int i=0 ,x ,n;
    Node *head=new Node(), *temp, *hector;
    temp=head;
	cout<<"number of elements you want to enter in the link list\n";
	cin>>n;
	cout<<"enter the elements"<<endl;
	while(i<n)
	{
	    
	    cin>>x;
	    hector=new Node();
	    temp->data=x;
	    if(i==n-1)
	    {
	        temp->next=NULL;
	        break;
	    }
	    else
	    {
	        temp->next=hector;
	    }
	    temp=hector;
	    i++;
	 }
	 printList(head);

	return 0;
}

