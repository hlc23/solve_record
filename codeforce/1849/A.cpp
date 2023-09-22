// Problem: A. Morning Sandwich
// Contest: Codeforces - Educational Codeforces Round 152 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1849/problem/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
#define int long long

using namespace std;

void solve(){
    int b, c, h;
    cin>>b>>c>>h;
    if (b-1 < c+h){
        cout<<b*2-1<<"\n";
    }
    else{
        cout<<(c+h)*2+1<<"\n";
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
