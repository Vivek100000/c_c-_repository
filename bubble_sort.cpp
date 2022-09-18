#include<iostream>

using namespace std;
void sorting(int *s,int n)
{
    int j=0, i=1;
    int temp;
   while(i<=n)
   {
       while(1)
       {
           if(j==n-1)
           {
               break;
           }
           if(s[j]>s[j+1])
           {
               temp=s[j+1];
               s[j+1]=s[j];
              s[j]=temp;
           }
           j++;
       }
       i++;
       j=0;
   }
}

int main()
{
    int n;
    cout<<"size of the array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the array"<<endl;
    fflush(stdin);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    
    sorting(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
   
    return 0;
}