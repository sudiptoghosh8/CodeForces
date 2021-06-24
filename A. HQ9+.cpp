#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] == '9' || s[i] == 'Q' || s[i] == 'H')
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
}
