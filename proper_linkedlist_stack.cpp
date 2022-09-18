#include <iostream>
using namespace std;
int n;
int i=1;
class Node {
public:
	int data;
	Node *next;	
};
Node *top=new Node, *temp=NULL;
void push(Node*top,int x)
{
    int j=0;
        for(j=0;j<=0;j++)
        {
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
        return;
}
//void pop();
//void peek(int p);
void display(Node* n)
{
	while (n != NULL) {
		cout << n->data << " ";
		n = n->next;
	}
}
int main()
{
    int i=1 ,x ,n,ch,val,p;
    cout<<"number of elements you want to enter in the link list\n";
	cin>>n;
   do {
        cout<<"1.push\n2.pop\n3.peek\n4.display\n5.exit";
    cin>>ch;
        switch(ch)
        {
        case 1:
        cout<<"Enter element to push";
        cin>>val;
        push(top,val);
        break;
        case 2:
        /*pop();
        break;
        case 3:
        cout<<"Enter element to peek";
        peek(p);
        break;
        case 4:*/
        display(top);
        break;
        default:
        cout<<"Enter right choice: ";
        break;
        }
   }while(ch!=5);
 return 0;
    }


