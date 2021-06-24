#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
    int a,b,c,d,n,j,l;
    string s,t="hello";
    cin>>s;
    c=0;
    j=0;
    l=s.length();
    for(int i=0; i<l; i++)
    {
        if(s[i]==t[j])
        {
            j++;
            c++;
        }


    }
    if(c==5)
    {
        cout<<"YES"<<endl;
    }
else
{
    cout<<"NO"<<endl;
}

    return 0;
}
