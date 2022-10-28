#include<iostream>
#include<vector>
#define int long long

using namespace std;

void solve(){
    int R, C, n, l, f, p=0, b=0; // row, col n, l, temp_full, package, block
    char t;
    cin>>R>>C>>n;
    vector<int> full(R, 0);
    for (int i=0; i<n; i++){
        cin>>t>>l;
        switch (t){
            case 'A':
                f = max(full[l], max(full[l+1], max(full[l+2], full[l+3])));
                if (f+1 <= C){
                    full[l] = f+1;
                    full[l+1] = f+1;
                    full[l+2] = f+1;
                    full[l+3] = f+1;
                    p++;
                    b+=4;
                }
                break;
            case 'B':
                f = full[l];
                if (f+3 <= C){
                    full[l] = f+3;
                    p++;
                    b+=3;
                }
                break;
            case 'C':
                f = max(full[l], full[l+1]);
                if (f+2 <= C){
                    full[l] = f+2;
                    full[l+1] = f+2;
                    p++;
                    b+=4;
                }
                break;
            case 'D':
                f = max(full[l]-2, full[l+1]);
                if (f+3 <= C){
                    full[l] = f+3;
                    full[l+1] = f+3;
                    p++;
                    b+=4;
                }
                break;
            case 'E':
                f = max(full[l]-1, max(full[l+1], full[l+2]));
                if (f+2 <= C){
                    full[l] = f+2;
                    full[l+1] = f+2;
                    full[l+2] = f+2;
                    p++;
                    b+=5;
                }
                break;
        }
    }
    cout<<R*C-b<<" "<<n-p;
}

signed main(){
    ios::sync_with_stdio(false);
	cin.tie(0);
    solve();
    return 0;
}
