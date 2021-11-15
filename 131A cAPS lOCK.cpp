#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long x;
    string a;
    cin>>a;
    x=a.size();
    for(int i=1; i<x; i++)
    {
        if(a[i]>93)
        {
            cout<<a;
            return 0;
        }
    }
    if(a[0]>93)
    {
        a[0]-=32;
    }
    else
    {
        a[0]+=32;
    }
    for(int i=1; i<x; i++)
    {
        a[i]+=32;
    }
    cout<<a<<endl;
    return 0;
}
