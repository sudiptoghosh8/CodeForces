#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t;
    cin >> t;
    map<char, char> mp;
    mp['L'] = 'L';
    mp['R'] = 'R';
    mp['U'] = 'D';
    mp['D'] = 'U';

    while(t--){
        int n;
        cin >> n;
        char s[n];
        for(int i = 0; i < n; i++){
            cin >> s[i];
        }
        for(int i = 0; i < n; i++){
            cout << mp[s[i]];
        }
        cout << endl;

    }
}
