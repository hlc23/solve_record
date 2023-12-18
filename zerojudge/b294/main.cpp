#include<bits/stdc++.h>
#define hlc23 ios_base::sync_with_stdio(false); cin.tie(0);
#define int long long
#define VI vector<int>
#define VVI vector<vector<int> >
#define PII pair<int, int>
#define F first
#define S second
#define mp make_pair
using namespace std;

void solve(){
    string s;
    cin>>s;
    int ans = 1;
    for (auto n : s){
        ans *= n - '0';
    }
    cout<<ans<<"\n";
}

signed main(){
    hlc23
    int t;
    cin>>t;
    while (t--) solve();
    return 0;
}