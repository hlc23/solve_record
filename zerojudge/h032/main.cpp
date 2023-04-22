#include<bits/stdc++.h>
using namespace std;

const int MAX = 1e5+5;

int N, a, b;
int fn = 0;
vector<vector<int> > table;
vector<int> d;

void dfs(int node, int from){
    d[node] = d[from] + 1;
    if (d[node] > d[fn]) fn = node;
    for (int i=0; i<table[node].size(); i++){
        if (table[node][i] != from){
            dfs(table[node][i], node);
        }
    }
}

void solve(){
    fn = 0;
    table.clear();
    table.resize(N, vector<int>());

    d.clear();
    d.resize(N, 0);

    for (int i=0; i<N-1; i++){
        cin>>a>>b;
        table[a].push_back(b);
        table[b].push_back(a);
    }
    dfs(0, -1);
    d.clear();
    d.resize(N, 0);
    
    dfs(fn, -1);
    cout<<d[fn]-1<<"\n";
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    while (cin>>N) solve();
    return 0;
}
