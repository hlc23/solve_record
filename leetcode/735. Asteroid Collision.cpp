#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;
        
        for (auto i : asteroids) {
            bool check = true;
            while (!st.empty() and (st.top() > 0 and i < 0)) {
                if (abs(st.top()) < abs(i)) {
                    st.pop();
                    continue;
                }
                else if (abs(st.top()) == abs(i)) {
                    st.pop();
                }

                check = false;
                break;
            }
            
            if (check) {
                st.push(i);
            }
        }
        
        vector<int> ans (st.size());
        for (int i = ans.size() - 1; i >= 0; i--){
            ans[i] = st.top();
            st.pop();
        }
        
        return ans;
    }
};