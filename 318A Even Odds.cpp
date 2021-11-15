#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long n, k ;
    cin >> n >> k ;
    if(n%2 == 0)
    {
        if(k <= n/2)
        {
            cout<<(k*2)-1;
        }
        else
        {
            cout<<((k-(n/2))*2);
        }
    }
    else
    {
        if(k <= ((n+1)/2))
        {
            cout<<(k*2)-1;
        }
        else
        {
            cout<< (k-((n+1)/2))*2;
        }

    }
    return 0;

}
