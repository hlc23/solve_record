#include<iostream>
#define int long long

using namespace std;
int h[101];
void solve(){
    int n, temp, r=0;
    cin>>n;
    for (int i=0; i<n; i++){
        cin>>temp;
        h[i] = temp;
    }
    for (int i=0; i<n; i++){
        if (i == 0 && h[i] == 0){
            r+= h[1];
            continue;
        }
        if (i == n-1 && h[i] == 0){
            r+= h[n-2];
            continue;
        }
        if (h[i] == 0){
            r+= min(h[i-1], h[i+1]);
        }
    }
    cout<<r;
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}
