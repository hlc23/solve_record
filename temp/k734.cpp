#include<bits/stdc++.h>
using namespace std;

const int MAX = 1e5+5;
int n, m, k, t, x, r;
set<int> key;
vector<set<int>> unlock;
vector<set<int>> get_key;

void solve(){
    cin>>n>>m>>k;
    unlock.resize(m);
    cin>>t;
    for (int i=0; i<t; i++){
        cin>>x;
        key.insert(x);
    }
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cin>>r;
            unlock[i].insert(r);
        }
    }
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cin>>r;
            get_key[i].insert(r);
        }
    }

    dp.resize(n+1);
    for (int i=0; i<=n; i++){
        dp[i].resize(k+1);
    }

    

}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}
