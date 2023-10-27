#include<bits/stdc++.h>
using namespace std;

signed main(){
    int n, x, temp, l=0, r=0, mi=101, ma=-101;
    cin>>x>>n;
    for (int i=0; i<n; i++){
        cin>>temp;
        if (temp < x){
            l++;
            mi = min(mi, temp);
        }
        else{
            r++;
            ma = max(ma, temp);
        }
    }
    if (l > r){
        cout<<l<<" "<<mi;
    }
    else{
        cout<<r<<" "<<ma;
    }
}