#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
    int k;
    cin>>k;
    for (int i=1; i<=k; i++){
        cout<<(i*i)*(i*i-1)/2-4*(i-1)*(i-2)<<"\n";
    }
    return 0;
}