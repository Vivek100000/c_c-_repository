#include <iostream>
using namespace std;
class space
{
    int x;
    int y;
    int z;
    public:
    void getdata(int a,int b,int c)
    {
        x=a;
        y=b;
        z=c;
    }
    void display()
    {
        cout<<x<<" "<<y<<" "<<z<<endl;
    }
    friend void operator-(space &);
    
};
  void operator-(space &z)
    {
        z.x=-z.x;
        z.y=-z.y;
        z.z=-z.z;
    }

int main()
{
    space s;
    s.getdata(10,-20,30);
    cout<<"objects of s:\n";
    s.display();
    -s;//-(s) internally called by -s
    cout<<"now objects\n";
    s.display();
    return 0;
}