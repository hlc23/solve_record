#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, m, k, a, b;
    cin>>n>>m>>k;
    vector<int> va;
    vector<int> vb;
    for (int i=0; i<n; i++){
        cin>>a;
        va.push_back(a);
    }
    for (int i=0; i<m; i++){
        cin>>b;
        vb.push_back(b);
    }
    sort(va.begin(), va.end());
    sort(vb.begin(), vb.end());
    
    int ans = 0;
    int ap=0, bp=0;
    while (ap < n and bp < m){
        if (va[ap]-k <= vb[bp] and vb[bp] <= va[ap]+k){
            ans++;
            ap++;
            bp++;
            continue;
        }
        if (va[ap] < vb[bp]){
            ap++;
            continue;
        }
        if (vb[bp] < va[ap]){
            bp++;
            continue;
        }
    }
    cout<<ans;
}