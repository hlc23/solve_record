#include<bits/stdc++.h>
#define int long long
using namespace std;

int f(int n, int m, int k){
    if (k == 0) return 0;
    int r = f(n-1, m, k-1);
    return (r+m)%n;
    
}

int n, m, k;
signed main(){
    cin>>n>>m>>k;
    cout<<f(n, m, k)+1<<"\n";
    return 0;
}
