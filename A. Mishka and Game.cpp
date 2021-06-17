#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int m[10000], c[10000], mishka=0, chris=0;;
    for(int i=0; i<n; i++)
    {
        cin>>m[i]>>c[i];
        if(m[i]>c[i])
        {
            mishka++;
        }
        if(c[i]>m[i])
        {
            chris++;
        }
    }
    if(mishka>chris)
    {
        cout<<"Mishka"<<endl;
        return 0;
    }
    if(mishka<chris)
    {
        cout<<"Chris"<<endl;
        return 0;
    }
    else
    {
        cout<<"Friendship is magic!^^"<<endl;
        return 0;
    }
}
