#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n==1)cout<<0<<endl;
        else if(n==2)cout<<1<<endl;
        else if(n%2==0 or n<4) cout<<2<<endl;
        else if(n%2==1)n--, cout<<3<<endl;

    }
    return 0;
}

