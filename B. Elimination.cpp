#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d,t;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c>>d;
        cout<<max(a+b,c+d)<<endl;
    }

    return 0;
}
