#include <bits/stdc++.h>
using namespace std;

int run(int N) {
    int sum = 0;
    vector <int> vec;
    for (int i = 1; i < N; i++){
        if (N == i){
            break;
        }
        if (N%i == 0){
            vec.push_back(i);
        }
    }

    for (int t = 0; t < vec.size(); t++){
        
        sum += vec[t];
    }
    if (N == sum) {
        cout<<"完全數"<<endl;
    }
    else if (N > sum){
        cout<<"虧數"<<endl;
    }
    else if (N < sum){
        cout<<"盈數"<<endl;
    }

    return 0;
}

int main(){
    int N;
    while (cin>>N) run(N);
    return 0;
}
