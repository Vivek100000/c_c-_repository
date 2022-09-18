#include<iostream>
using namespace std;

int main()
{
    int n, last;
    cout<<"enter the number of elements to enter in the array"<<endl;
    cin>>n;
    int arr[n];
    int arr1[n], arr2[n], j=0, k=0, q=0;
    for(int i=0;i<n;i++)
    {
        cin>>*(arr+i);
        if(i==n-1)
           last=*(arr+i);
    }
    
for(int i=0;i<n;i++)
    {
        *(arr+i)<last?  arr1[j++]=*(arr+i):arr2[q++]=*(arr+i);
        
    }
    for(int i=0;i<n;i++)
    {
        if(i<j)
        {
            arr[i]=arr1[i];
        }
        else if(i==j)
        {
            arr[i]=last;
        }
        else if(i>j)
        {
            arr[i]=arr2[k];
            k++;
        }
    }
 
    
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
