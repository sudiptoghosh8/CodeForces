#include<bits/stdc++.h>

using namespace std;

int a[1000][1000];

int main()
{
    for(int i=1; i<6; i++)
    {
        for(int j=1; j<6; j++)
        {
            cin>>a[i][j];
        }
    }
    int x, y;
    for(int i=1; i<6; i++)
    {
        for(int j=1; j<6; j++)
        {
            ///cout<<a[i][j]<<" ";
            if(a[i][j]==1)
            {
                x=i;
                y=j;
            }
        }
        ///cout<<endl;
    }
    ///cout<<x<<" "<<y<<endl;
    int ats;
    if(x>=3)
    {
        ats=x-3;
    }
    else
    {
        ats=3-x;
    }
    if(y>=3)
    {
        ats=ats+(y-3);
    }
    else
    {
        ats=ats+(3-y);
    }
    cout<<ats<<endl;
}
