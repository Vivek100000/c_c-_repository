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
    space operator+(space &ob)
    {
        space temp;
        temp.x=x+ob.x;
        temp.y=y+ob.y; 
        temp.z=z+ob.z;
        return temp;
    }
};

int main()
{
    space s1, s2, s3;
    s1.getdata(10,-20,30);
    cout<<"objects of s:\n";
    s1.display();
    s2.getdata(20,9,76);
    s2.display();
    s3=s1+s2; //s1.+(s2)
    cout<<"now objects\n";
    s3.display();
    return 0;
}