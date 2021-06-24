#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,c,s,d;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        cin>>a>>b>>c;
        s=a+b+c;
    d+=s;
    }

if((d < 0)||(d>0) )
{
    cout<<"NO"<<endl;

}
else{
    cout<<"YES"<<endl;
}
    return 0;
}
