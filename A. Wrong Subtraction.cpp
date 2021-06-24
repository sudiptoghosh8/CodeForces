#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,n,t;
    cin>>b>>t;
    while(t--)
    {
        if( b%10!=0)
        {
            b-=1;
        }
        else
        {
            b=b/10;
        }

    }
    cout<<b<<endl;

    return 0;
}
