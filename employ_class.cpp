#include <iostream>
using namespace std;
class employee
{
    string name;
    int age;
    string employ_code;
    static int count;
    public:
    employee(string a,int b,string c)
    {
        name=a;
        age=b;
        employ_code=c;
        count++;
    }
    employee(){count++;}
    void e3_display()
    {
           cout<<"the age difference is "<<age<<endl;
    }
    void display()
    {
        cout<<name<<" "<<age<<" "<<employ_code<<endl;
    }
    employee operator-(employee &ob)
    {
        employee temp;
        temp.age=age-ob.age;
        return temp;
    }
    ~employee()
    {
        cout<<"destroying object "<<count<<endl;
        count--;
    }
};
int employee::count=0;
int main()
{
    employee s1("nitin",31,"E001"), s2("amit",25,"E002"), s3;
    
    
    s1.display();

    s2.display();
    s3=s1-s2; //s1.-(s2)
    
    s3.e3_display();
    return 0;
}