#include<bits/stdc++.h>
#define int long long

using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> a(n, 0);
    vector<int> b(n, 0);
    for (int i=1; i<n; i++) cin>>b[i];
    a[n-1] = b[n-1];
    a[0] = b[1];
    for (int i=1; i<n-1; i++){
        a[i] = min(b[i], b[i+1]);
    }
    for (auto it=a.begin(); it != a.end(); it++) cout<<*it<<" ";
    cout<<"\n";
}

signed main(){
    ios::sync_with_stdio(false);
	cin.tie(0);
    int t;
    cin>>t;
    while (t--) solve();
    return 0;
}
