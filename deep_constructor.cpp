#include<iostream>
using namespace std;
class person
{
    int age;
    int *standard;
    public:
    
    person(int age)
    {
        standard=new int;
        *standard=5;
        this->age=age;
    }
    person(person *x)
    {
        standard=new int;
        *standard=*(x->standard);
        age=x->age;
    }
   
    void display(void)
    {
        cout<<"age of the person: "<<age<<endl;
        cout<<"standard of the person: "<<*standard<<endl;
    }

};

int main()
{
   
   person person2(4600);
   person person3(&person2);
   cout<<"the age of person 2\n";
   person2.display();
   cout<<"the age of person 3\n";
   person3.display();
   return 0;
}