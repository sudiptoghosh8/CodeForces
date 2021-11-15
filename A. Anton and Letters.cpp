#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<char> s;
    char c;
    do
    {
        cin>>c;
        if(c>=97&&c<=122)
            s.insert(c);
    }
    while(c!='}');
    cout<<s.size();

    return 0;

}

