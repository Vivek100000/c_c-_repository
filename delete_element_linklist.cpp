#include <bits/stdc++.h>
using namespace std;

class Node {
public:
	int data;
	Node *next;
	
};


int main()
{
    int i=0 ,x ,n;
    Node *head=new Node(), *temp, *hector;
    temp=head;
	cout<<"number of elements you want to enter in the link list\n";
	cin>>n;
	while(i<n)
	{
	    cout<<"enter the elements"<<endl;
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
     int pro=1;
     Node *grit=head;
	cout<<"position of the element to be removed\n";
    cin>>n;
    while(1)
    {
        grit=grit->next;
        pro++;
    }

	return 0;
}
