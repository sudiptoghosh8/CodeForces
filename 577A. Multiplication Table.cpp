#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, x;
	cin >> n >> x;
	int ans = 0;
	for (int i=n; i > 0; i--)
    {
        if (x % i == 0 && x / i <= n)
            ans++;
       // cout<<"ans = "<<ans<<", "<<x<<"%"<<i<<" = "<<x%i<<", "<<x<<"/"<<i<<" = "<<x/i<<endl;
    }
	cout << ans;

	return 0;
}
