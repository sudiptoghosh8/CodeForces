#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int count1 = 0;
    int count2 = 0;
    for(int i = 0; i < s.length(); ++i)
    {
        if(s[i] == '1')
        {
            ++count1;
            count2 = 0;
        }
        else
        {
            count1 = 0;
            ++count2;
        }
        if(count1 == 7 || count2 == 7 )
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}
