#include<bits/stdc++.h>
#define hlc23 ios_base::sync_with_stdio(false); cin.tie(0);
#define int long long
using namespace std;

void solve(){
    int a, b;
    cin>>a>>b;
    cout<<(a < b)*(b - a) + (a > b) * (100 - a + b); 
}

signed main(){
    hlc23
	solve();
    return 0;
}