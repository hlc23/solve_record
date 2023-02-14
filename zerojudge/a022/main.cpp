#include<bits/stdc++.h>
using namespace std;

void solve(){
	string s;
	bool check=true;
	int i;
	cin>>s;
	for (i=0; i<s.size(); i++){
		if (s[i] != s[s.size()-1-i]){
			check=false;
			break;
		}
	}
	if (check) cout<<"yes";
	else cout<<"no";
} 

signed main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	solve();
	return 0;
	
}
