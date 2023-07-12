#include<bits/stdc++.h>
#define int long long

using namespace std;
struct info{
    int from, to;
};

void solve(){
    int n, k, tmp, last;
    cin>>n>>k;
    vector<int> table;
    cin>>last;
    for (int i=1; i<n-1; i++){
        cin>>tmp;
        table.push_back(abs(last-tmp));
        last = tmp;
    }
    
}

signed main(){
    ios::sync_with_stdio(false);
	cin.tie(0);
    int t;
    cin>>t;
    while (t--) solve();
    return 0;
}
