#include "testlib.h"
#include <iostream>

using namespace std;

int main(int argc, char* argv[]){
    registerGen(argc, argv, 1);
    int n = rnd.next(2e4-1)+1;
    int m = rnd.next(2e4-1)+1;
    vector<vector<int>> vec(n*m, vector<int>(2));
    for(int i = 0; i < n*m; i++){
        vec[i][0] = rnd.next(0, n-1);
        vec[i][1] = rnd.next(0, m-1);
    }
    cout << n << " " << m << endl;
    shuffle(vec.begin(), vec.end());
    for(int i = 0; i < n*m; i++){
        cout << vec[i][0] << " " << vec[i][1] << endl;
    }
}

