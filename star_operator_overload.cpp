#include <iostream>
using namespace std;
class calc
{
    int x;
    int y;
    int z;
    static int count;
    public:
    calc(int a,int b,int c)
    {
        x=a;
        y=b;
        z=c;
        count++;
    }
    calc() 
    {
        count++;
    }
    void display()
    {
        cout<<x<<" "<<y<<" "<<z<<endl;
    }
    calc operator*(calc &ob)
    {
        calc temp;
        temp.x=x*ob.x;
        temp.y=y*ob.y;
        temp.z=z*ob.z;
        return temp;
        
    }
    ~calc()
    {
        cout<<"destroying "<<count<<" object\n";
        count--;
    }
};
int calc::count=0;

int main()
{
    calc s1(10,20,30), s2(20,9,76), s3, s4;
    s3=s1*s2; //s1.+(s2)
    cout<<"now objects\n";
    s3.display();
    return 0;
}