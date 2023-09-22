#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    double myPow(double x, int n) {
        if (n == 0) return 1;
        if (n < 0) return 1.0 / myPow(x, -n);
        if (n % 2 == 1) return x * myPow(x * x, (n - 1) / 2);
        else return myPow(x * x, n / 2);
    }
};

signed main(){
    Solution obj;
    cout << obj.myPow(2.00000, 10) << endl;
    cout << obj.myPow(2.10000, 3) << endl;
    cout << obj.myPow(2.00000, -2) << endl;
    return 0;
}