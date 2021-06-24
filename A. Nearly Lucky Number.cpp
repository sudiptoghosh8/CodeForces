#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,l,i,c,t,j;
    string s;
    cin>>s;
    t=0;
    l=s.length();
    for(i=0;i<l;i++)
    {
        if(s[i]=='4'||s[i]=='7')
        {
            t++;
        }

    }
    if(t==7||t==4)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
