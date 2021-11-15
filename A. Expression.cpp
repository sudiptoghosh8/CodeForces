#include<bits/stdc++.h>
using namespace std;
int main()
{
   int a, b, c;
    cin >> a >> b >> c;
    int S[4];
    S[0] = a + b + c;
    S[1] = a * (b + c);
    S[2] = a * b * c;
    S[3] = (a + b) * c;
    cout << max({S[0], S[1], S[2], S[3]});

    return 0;
}
