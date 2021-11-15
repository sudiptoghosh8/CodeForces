#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<char>s;
    char c;
    do
    {
        cin>>c;

        for(int i=1;i<=strlen(c);i++)
        {
            s.insert(c);
        }
    }
    return 0;
}
