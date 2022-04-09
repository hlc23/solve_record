#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    while (cin>>n){
        if (n == 0){
            break;
        }
        for (int t = 1; t<n; t++){
            if (t%7 != 0){
                cout<<t<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
