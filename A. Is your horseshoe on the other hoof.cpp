//solved
#include<bits/stdc++.h>
using namespace std;
int a1, a2, a3, a4;
set<int> st;
int main()
{
	int a[5];

	scanf("%d%d%d%d", &a[0], &a[1], &a[2], &a[3]);
	sort(a, a + 4);
	int s = 1;
	for (int i = 1; i < 4; i++) {
		if (a[i] != a[i - 1]) {
			s++;
		}
	}
	printf("%d\n", 4 - s);
}



