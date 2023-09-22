// Problem: C. Binary String Copying
// Contest: Codeforces - Educational Codeforces Round 152 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1849/problem/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)
 
#include<bits/stdc++.h>
#define int long long
 
using namespace std;
 
void solve(){
    int n, m, l, r;
    string s;
    set<string> st;
    cin>>n>>m;
    cin>>s;
    for (int i=0; i<m; i++){
        cin>>l>>r;
        l--; r--;
        string tmp = s;
        sort(tmp.begin()+l, tmp.begin()+r+1);
        st.insert(tmp);
    }
    cout<<st.size()<<"\n";
 
}
 
signed main(){
    ios::sync_with_stdio(false);
	cin.tie(0);
    int t;
    cin>>t;
    while (t--) solve();
    return 0;
}