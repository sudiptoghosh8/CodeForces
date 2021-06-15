#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string a;
    cin>>n;
    cin>>a;
    int ats=0;
    for(int i=0; i<n; i++)
    {
        if(a[i]==a[i+1])
        {
            ats++;
        }
    }

    cout<<ats<<endl;


}
