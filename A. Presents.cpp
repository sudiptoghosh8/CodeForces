#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	map<int,int> mp;
	for(int i=1;i<=n;++i){
		int x;
		cin>>x;
		mp[x]=i;
	}
	map<int,int>::iterator m;
	for(m=mp.begin();m!=mp.end();++m){
		cout<<m->second<<" ";
	}cout<<endl;
	return 0;
}
