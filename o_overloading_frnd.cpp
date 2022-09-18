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
    friend space operator+(space &,space &);
};
space operator+(space &ob1,space &ob2)
    {
        space temp;
        temp.x=ob1.x+ob2.x;
        temp.y=ob1.y+ob2.y;
        temp.z=ob1.z+ob2.z;
        return temp;
    }

int main()
{
    space s1, s2, s3;
    s1.getdata(10,-20,30);
    cout<<"objects of s:\n";
    s1.display();
    s2.getdata(20,9,76);
    s2.display();
    s3=s1+s2; //+(s1,s2)
    cout<<"now objects\n";
    s3.display();
    return 0;
}