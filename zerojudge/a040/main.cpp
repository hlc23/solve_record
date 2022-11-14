	#include<bits/stdc++.h>
	using namespace std;
	
	void solve(){
		int n, m;
		int ans=0, tmp, s;
		int x;
		cin>>n>>m;
	
		for (x=n; x<=m; x++){
			s=0;
	        tmp=x;
	        do{
	            s+=pow(tmp%10, to_string(x).size());
	            tmp/=10;
	        }
	        while(tmp>0);
	
			if (s==x) {
	            ans++;
				cout<<x<<" ";	
			}
		}
		if (!ans) cout<<"none";
	} 
	
	signed main(){
		ios::sync_with_stdio(false);
		cin.tie(0);
		solve();
		return 0;
	}
