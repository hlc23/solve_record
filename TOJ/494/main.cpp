#include<iostream>
#define int long long

using namespace std;

void solve(){
    int n, k, i, j, l, m;
    cin>>n>>k;
    int a, b, c, d;
    for (a=1; a<=n; a++){
        for (b=1; b<=k; b++){
            for (c=1; c<=n; c++){
                for (d=1; d<=k; d++){
                    if ((a+c)%2) cout<<" ";
                    else cout<<"*";
                }
            }
            cout<<"\n";
        }
    }
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}
