#include<bits/stdc++.h>
using namespace std;
long long k,w,n;
long long  ans=0;
int main()
{
    cin>>k>>n>>w;
    for(int i=1; i<=w; i++)
    {
        ans+=i*k;
    }
    if(ans>n)
        cout<<ans-n;
    else
        cout<<0;
    return 0;
}
