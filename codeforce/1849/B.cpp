// Problem: B. Monsters
// Contest: Codeforces - Educational Codeforces Round 152 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1849/problem/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
#define int long long

using namespace std;
bool comp(pair<int, int> a, pair<int, int> b){
    // 0 is first.
    // then bigger number after.
    if (a.second == b.second) return a.first < b.first;
    if (a.second == 0) return true;
    if (b.second == 0) return false;
    return a.second > b.second;
}
void solve(){
    int n, k, tmp;
    cin>>n>>k;
    vector<pair<int, int>> vec(n);
    for (int i=0; i<n ;i++){
        cin>>tmp;
        vec[i] = {i+1, tmp%k};
    }

    sort(vec.begin(), vec.end(), comp);
    for (auto i: vec){
        cout<<i.first<<" ";
    }
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
