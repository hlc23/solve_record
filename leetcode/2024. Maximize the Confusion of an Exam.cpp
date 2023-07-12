#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool check(string s, int size, int k){
        int n = s.size();
        unordered_map<char, int> table;
        for (int i=0; i<size; i++){
            table[s[i]]++;
        }
        if (min(table['T'], table['F']) <= k){
            return true;
        }
        for (int i=size; i<n; i++){
            table[s[i]]++;
            table[s[i-size]]--;
            if (min(table['T'], table['F']) <= k){
                return true;
            }
        }
        return false;
    }

    int maxConsecutiveAnswers(string answerKey, int k) {
        int n = answerKey.size();
        int l = k, r = n;
        while (l < r){
            int mid = (l+r+1)/2;
            if (check(answerKey, mid, k)){
                l = mid;
            }
            else{
                r = mid-1;
            }
        }
        return l;
        
    }
};