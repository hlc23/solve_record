#include <bits/stdc++.h>
using namespace std;

int main() {
//input:
    int n;
    // 建立二維向量
    vector <vector<int> > vec(n);
    // 讀取n行數據
    cin>>n;
    for (int i=1; i<=n; i++){
        // 讀取第i行數據
        int k=0;
        cin>>k;
        // k個子節點
        vector <int> child_point(k,0);
        for (int t=1; t<=k; t++){
            // 讀取k個子節點
            int p;
            cin>>p;
            child_point[t]=p;
            // 將各個子節點存入chile_point
        }
        // 將編號i的節點的子節點存入vec
        // 表示節點i的子節點
        vec.push_back(child_point);
    }
    for (int i=1; i<=vec.size(); i++){
    	cout<<i<<":";
    	for (int t=0;t<vec[i].size()-1;t++){
    		cout<<vec[i][t]<<" ";
		}
		cout<<endl;
	}


    
    return 0;
}