#include<bits/stdc++.h>
#define int long long

using namespace std;

void solve(){
    int n, x1, y1, x2, y2;
    cin>>n>>x1>>y1>>x2>>y2;
    int c = n/2;
    if (x1 > c) x1 = n-x1+1;
    if (x2 > c) x2 = n-x2+1;
    if (y1 > c) y1 = n-y1+1;
    if (y2 > c) y2 = n-y2+1;
    cout<<abs(min(x1, y1)-min(x2, y2))<<"\n";
}

signed main(){
    ios::sync_with_stdio(false);
	cin.tie(0);
    int t;
    cin>>t;
    while (t--) solve();
    return 0;
}