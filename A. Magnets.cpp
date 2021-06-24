#include<bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    int n, a[100000],c;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    c=1;
    for(int i=1; i<n; i++)
    {
        if(a[i]==a[i-1])
        {

        }
        else
        {
            c++;
        }
    }
    cout<<c<<endl;
}
