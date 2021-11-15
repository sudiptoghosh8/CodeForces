#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,i;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>s;
        for(int i=0;i<n;i++)
        {
                if(s[i]>s[i+1])
                {
                    swap(s[i+1],s[i]);
                }


        }
        cout<<s;
    }
    return 0;
}
