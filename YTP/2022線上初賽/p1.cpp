#include<bits/stdc++.h>
#define int long long
using namespace std;

string N, M;

signed main(){
    ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>N>>M;
	int n_len = N.length(), 
	    m_len = M.length();
	vector<string> vec;
	for (int i=0; i<m_len-n_len+1; i++){
	    int dc = 0; // different count
	    for (int com=0; com<n_len; com++){
	        // compare
            if (N[com] == M[i+com]) continue; 
            dc++;
	    }
	    if (dc == 0 or dc == 1){
	        string ts = "";
	        for (int b=i; b<i+n_len; b++){
	            ts += M[b];
	        }
	        vec.push_back(ts);
	    }
	} 
	sort(vec.begin(), vec.end());
	if (vec.size())
	    for (auto it = vec.begin(); it != vec.end(); it++) cout<<*it<<"\n";
    else cout<<"Not found\n";
    return 0;
}
