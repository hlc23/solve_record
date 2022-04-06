#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int n, hi, a, c,set = 1;
    vector <int> vec;
    while (cin>>n){
        if (n == 0){
            break;
        }
        vec.clear();
        c = 0;
        a = 0;
        for (int t=0; t<n; t++){
            cin>>hi;
            vec.push_back(hi);
            a += hi;
        }
        a /= n;
        for (int t=0; t < vec.size(); t++){
            if (vec[t] > a){
                c += vec[t] - a;
            }
        }
        cout<<"Set #"<<set<<endl;
        cout<<"The minimum number of moves is "<<c<<"."<<endl;
        cout<<endl;
        set ++;
    }
    return 0;
}
