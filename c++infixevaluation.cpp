#include <iostream>
using namespace std;

int main()
{
    string str;
    int stack[50];
    int top=-1, i=0, t, j=0;
    cout<<"enter the postfix expression\n";
    cin>>str;
    while(str[i]!='\0')
    {
        if(str[i]>='0'&&str[i]<='9')
        {
            top++;
            stack[top]=str[i]-48;
        }
        else
        {
            t=top;
            top--;
            str[i]=='+'? stack[top]=stack[t-1]+stack[t]:str[i]=='-'? stack[top]=stack[t-1]-stack[t]:str[i]=='*'? stack[top]=stack[t-1]*stack[t]:stack[top]=stack[t-1]/stack[t];
        } 
        i++;
    }
     cout<<stack[top];
     return 0;
}


