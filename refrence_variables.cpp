#include <iostream>
using namespace std;

void sum(int &k)
{
    k=k+10;
}
int main()
{
    int i=10;
    sum(i);
    cout<<"altered value of i is: "<<i<<endl;
    return 0;
}
