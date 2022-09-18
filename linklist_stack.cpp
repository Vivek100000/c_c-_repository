#include <iostream>
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
    int i=1 ,x ,n;
    Node *top=new Node, *temp=NULL;
	cout<<"number of elements you want to enter in the link list\n";
	cin>>n;
     cout<<"enter the elements"<<endl;
	while(1)
	{
	   
	    cin>>x;
	    top->data=x;
       top->next=temp;
        if(i==n)
        {
            break;
        }
        temp=top;
		
    top=new Node;
        i++;
	 }
	 printList(top);
    return 0;
}

