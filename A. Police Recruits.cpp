#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,i,b,n,sum,ans;
    cin>>n;
    int arr[100001];
    sum=0;
    ans = 0;
    for(i=1;i<=n;i++)
    {
        cin>>arr[i];

    }
    for(i=1;i<=n;i++)
    {
        if(arr[i]>0)
        {
            sum+=arr[i];
        }
        if(arr[i]==-1 && sum!=0)
        {
           sum--;
        }
        else if(arr[i] == -1)
        {
            ans++;
        }
    }


    cout<<ans<<endl;


    return 0;
}
