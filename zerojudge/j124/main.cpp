#include<iostream>
#define int long long

using namespace std;

int f(int n){
    int r;
    cin>>r;
    if (r == 0) return 0;
    int sum = 0;
    if (n != -1){
        sum = abs(n-r);
    }
    if (r%2) return sum+f(r)+f(r)+f(r);
    else return sum+f(r)+f(r);
}

void solve(){
    cout<<f(-1);
}

signed main(){
    ios::sync_with_stdio(false);
	cin.tie(0);
    solve();
    return 0;
}
