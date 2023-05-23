#include<bits/stdc++.h>
using namespace std;

const int MAXN = 2e8+5;
int N, M, X, Y;
vector<vector<int> > table;
int values[MAXN];
int r=0;

int main(){
    // input
    cin>>N>>M;
    
    // init values
    for (int i=1; i<=N; i++) values[i] = -1;
    for (int i=0; i<=N; i++){
    	vector<int> temp;
    	table.push_back(temp);
    }
    
    // also input
    for (int n=0; n< M; n++){
        cin>>X>>Y;
        table[X].push_back(Y);
        table[Y].push_back(X);
    }

    // solve
    for (int i=1; i<=N; i++){
        set<int> used;
        for (int j=0; j<table[i].size(); j++){
        	int p = table[i][j];
            if (values[p] != -1) used.insert(values[p]);
        }
        // find not use
        int v = 1;
        while (used.count(v)) v++;
        values[i] = v;
        r = max(r, v);
    }
    cout<<r;
    return 0;
}