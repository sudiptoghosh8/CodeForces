#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int count = 0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int temp;
        cin>>temp;
        if(temp==5)
        {
            count++;
        }
    }
    if(n==count)
    {
        cout<<-1;
        return 0;

    }
    bool flag = true;
    for(int i=0; i<count/9; i++)
    {
        cout<<555555555;
        flag = false;
    }
    for(int i=0; i<n-count; i++)
    {
        cout<<0;
        if(flag)
            break;
    }





    return 0;
}
