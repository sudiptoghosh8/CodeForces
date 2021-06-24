#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,i,j,a,b,c,l1,l2;
    string s,s2;
    cin>>s;
    cin>>s2;
    c=0;
    l1=s.length()-1;
    l2=s2.length()-1;
    for(i=l1,j=0; i>=0,j<=l2; i--,j++)
    {
        if(s[i]==s2[j])
        {
            c++;
        }
    }
    if(l1==0 && l2==0 && s!=s2)
    {
        cout<<"NO";
    }
    else if(l1==l2 && c==l1+1)
    {
        cout<<"YES";
    }
    else
        cout<<"NO";


return 0;
}
