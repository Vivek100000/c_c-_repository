#include<iostream>
using namespace std;
class B;
class C;
class A 
{
    int x;
    public:
    void getdata(int ,B &,C &);
    
    void display(B &,C &);
   
};
class B 
{
    int y;
    friend class A;
};
class C 
{
    int z;
    friend class A;
};
void A::getdata(int x,B &b,C &c)
    {
        this->x=x;
        c.z=x;
        b.y=x;
    }
void A::display(B &a,C &b)
    {
        cout<<"Class A output: "<<x<<"\nclass B output: "<<a.y<<"\nclass C output: "<<b.z;
    }
int main()
{
    A a;
    B b;
    C c;
    a.getdata(69,b,c);
    a.display(b,c);
    return 0;
}

