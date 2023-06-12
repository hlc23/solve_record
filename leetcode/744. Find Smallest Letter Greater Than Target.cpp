#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int left = 0, right = letters.size()-1, mid;
        while (left <= right){
            mid = (left + right) / 2;
            if (letters[mid] <= target){
                left = mid + 1;
            }
            else if (letters[mid] > target){
                right = mid - 1;
            }
        }
        if (left == letters.size()) return letters[0];
        else return letters[left];
    }
};