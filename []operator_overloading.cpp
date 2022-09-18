#include<iostream>
#include<stdlib.h>
using namespace std;
class ary
{
    
   int arr[100];
   int n;
   public:

   ary()
   {
       cout<<"enter the number elements you want to enter in array"<<endl;
       cin>>n;
       cout<<"enter the elements of array\n";
       for(int i=0;i<n;i++)
       {
           cin>>arr[i];
       }
       fflush(stdin);
   }
   int operator[](int i)
   {
       if(i>=n)
       {
           
           return 0;
       }
       return arr[i];
   }
   ~ary()
   {
       cout<<"destroying the created object"<<endl;
   }

};
int main()
{
    
  ary A;
  int n;
  cout<<"enter the element you want to print\n";
  cin>>n;
  cout<<"the "<<n<<" element is: ";//A.[](n-1)
  if(A[n-1]!=0)
  {
      cout<<A[n-1]<<endl;
  }
  else
  {
    cout<<"outside the limit"<<endl;
  }
  return 0;
}