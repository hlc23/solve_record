#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    // solution 1
    vector<bool> binary(int n){
        vector<bool> vec(30, 0);
        int c = 0;
        while (n != 1){
            vec[c++] = n%2;
            n /= 2;
        }
        vec[29] = 1;
        return vec;
    }

    int minFlips(int a, int b, int c) {
        vector<bool> vec_a = binary(a);
        vector<bool> vec_b = binary(b);
        vector<bool> vec_c = binary(c);

        int ans = 0;
        for (int i=0; i<30; i++){
            if ((vec_a[i] or vec_b[i]) != vec_c[i]){
                if (vec_c[i]) ans++;
                else{
                    if (vec_a[i] == vec_b[i])
                        ans += 2;
                    else ans += 1;
                } 
            }
        }
        return ans;
    }

    // solution 2
    int minFlips(int a, int b, int c){
        int ans = 0;
        while (a != 0 or b != 0 or c != 0){
            if (c & 1 == 1){
                if (!((a & 1) or (b & 1))) ans ++;
                // a_i = 0 and b_i = 0 => !false
                // a_i = 1 and b_i = 0 => !true
            }else{
                ans += (a & 1) + (b & 1);
            }
            a >>= 1;
            b >>= 1;
            c >>= 1;
        }
        return ans;
    }

};