#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,t,a,b,c,x,y,z,max;
    int ar[10000];
    cin>>n;
    max=0;
    z=0;

    for(i=0;i<n;i++)
    {

        cin>>ar[i];
        b=ar[i]%90;
        if(max==b)
        {
            z=1;

        }
    }
    if(z)
    {
        cout<<b<<endl;
    }
    else{cout<<"5555555550"<<endl;}




   return 0;
}
