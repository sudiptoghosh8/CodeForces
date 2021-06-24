#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,l,n,a,d;
    string s;
    cin>>n;
    cin>>s;
    a=0;
    d=0;
    l=s.length();
    for(i=0;i<n;i++)
    {
     if(s[i]=='A')
     {
         a++;
     }
     if(s[i]=='D')
     {
         d++;
     }
    }
    if(a>d)
    {
        cout<<"Anton"<<endl;
    }
    else if(a<d)
    {
        cout<<"Danik"<<endl;
    }
    else
    {
        cout<<"Friendship"<<endl;
    }
    return 0;
}
