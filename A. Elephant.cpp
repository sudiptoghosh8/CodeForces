#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin>>x;
    int ans;
    if(x%5==0)
    {
        ans=x/5;
    }
    else
    {
        ans=x/5+1;
    }
    cout<<ans;
}
