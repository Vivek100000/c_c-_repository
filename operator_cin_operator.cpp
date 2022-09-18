#include<iostream>

using namespace std;

class employee
{
    int age;
    string empcode;
    public:
    friend istream& operator>>(istream &,employee &);
    friend ostream& operator<<(ostream &,employee &);
};
istream & operator>>(istream &input,employee &s)
{
   input>>s.age>>s.empcode;
   return input;
}
ostream & operator<<(ostream &output,employee &s)
{
   output<<"age is: "<<s.age<<"\nemployee code is: "<<s.empcode<<endl;
   return output;
}

int main()
{
    employee s1;
    cout<<"enter the age and empcode"<<endl;
    cin>>s1;//>>(s1)
    cout<<s1;//<<(s1)
    return 0;
}