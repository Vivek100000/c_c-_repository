#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;
void sorting(string &s)
{
   sort(s.begin(),s.end());
}

int main()
{
    string s1, s2;
    cout<<"enter the string"<<endl;
    cin>>s1>>s2;
    fflush(stdin);
    if(s1.length()!=s2.length())
    {
        cout<<"No the strings are not the anagrams";
        exit(0);
    }
    
    sorting(s1);
    sorting(s2);
    if(s1.compare(s2)==0)
    {
        cout<<"yes the strings are anagram";
    }
    else
    {
        cout<<"not a anagram";
    }
    return 0;
}