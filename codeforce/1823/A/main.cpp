#include<bits/stdc++.h>
#define int long long

using namespace std;

int n, k;

int C(int n){
    if (n < 1) return 0;
    return n*(n-1)/2;
}

void solve(){
    cin>>n>>k;
    for (int i=0; i<=n; i++){
        int j = n-i;
        if (C(i)+C(j) == k){
            cout<<"YES\n";
            int ti=0, tj=0;
            while (ti+tj<n){
                if (ti < i){
                    cout<<1<<" ";
                    ti++;
                }
                if (tj < j){
                    cout<<-1<<" ";
                    tj++;
                }
            }
            cout<<"\n";
            return;
        }
    }
    cout<<"NO\n";
}

signed main(){
    ios::sync_with_stdio(false);
	cin.tie(0);
    int t;
    cin>>t;
    while (t--) solve();
    return 0;
}
