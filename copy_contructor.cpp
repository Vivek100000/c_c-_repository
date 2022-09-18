#include<iostream>
using namespace std;
class person
{
    int age;
    public:
    
    person(int age)
    {
        this->age=age;
    }
   
    void display(void)
    {
        cout<<age<<endl;
    }

};

int main()
{
   
   person person2(46);
   person person3=person2;
   cout<<"the age of person 2 whfbwkd wfhwkjf fswjfskjf wkjwkjwfhskjf wkwhkw\n";
   person2.display();
   cout<<"the age of person 3 skfhwkd whfwfhskd shkjshks hskh skfsjfgsif \n";
   person3.display();
   return 0;
}