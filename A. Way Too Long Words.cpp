#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int t,n,a,i;
    cin>>t;
    while(t--)
    {
        cin>>str;
        n = str.size();
        if(n<=10)
        {
            cout<<str;
        }
        else
        {
            cout<< str[0] << n-2 << str[n-1];

        }
        cout<<endl;

    }
    return 0;
}
