#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, a[1001],flag;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    flag=0;
    for(int i=0; i<n; i++)
    {
        if(a[i]!=0)
        {
            flag=1;
        }
    }
    if(flag==1)
    {
        cout<<"HARD"<<endl;
    }
    else
    {
        cout<<"EASY"<<endl;
    }

    return 0;
}
