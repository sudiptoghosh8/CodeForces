#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,y;
    cin>>n;
    int sum=0;
    for(int i=1; i<=n; ++i)
    {

        cin>>x>>y;
        if(y-x>=2)
        {
            sum++;
        }
    }
    cout<<sum<<endl;
    return 0;
}
