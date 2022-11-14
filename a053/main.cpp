#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	int ans;
	cin>>n;
	if (n>40) ans=100;
	else if (n>20) ans=80+(n-20);
	else if (n>10) ans=60+(n-10)*2;
	else ans=n*6;
	cout<<ans;
} 

signed main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	solve();
	return 0;
	
}
