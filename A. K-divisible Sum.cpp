#include <bits/stdc++.h>
using namespace std;
void res()
{
    long long int n, k,s;
    cin >> n >> k;
    if (n>k)
    {
         s = 1;
        if((n%k)>0)
        {
            s++;
        }
        cout << s;
    }
    else if (n<=k)
    {
        s = k/n;
        if (k%n>0)
        {
            s++;
        }
        cout << s;
    }
    cout <<endl;
}
int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        res();
    }
    return 0;
}
