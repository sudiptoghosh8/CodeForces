#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100000], n, s, max = 1;
	cin >> n;
	cin >> a[0];
	s = 1;
	for (int i = 1;i < n;i++) {
		cin >> a[i];
		if (a[i] >= a[i - 1]) {
			s += 1;
			if (max < s)max = s;
		}
		else {
			s = 1;
		}
	}
	cout << max;
	return 0;


}
