#include<bits/stdc++.h>
#define int long long

using namespace std;

int n, k, temp;
int ans;

void solve(){
    int ans = 0;
    cin>>n>>k;
    for (int i=1; i<=n; i++){
        cin>>temp;
        if (abs(temp-i)%k)
            ans++;
    }
    switch(ans){
        case 0:
        cout<<0<<"\n";
        return;
        case 2:
        cout<<1<<"\n";
        return;
        default:
        cout<<-1<<"\n";
        return;
    }
    cout<<ans<<"\n";
}

signed main(){
    ios::sync_with_stdio(false);
	cin.tie(0);
    int t;
    cin>>t;
    while (t--) solve();
    return 0;
}
